/* this would be biquad.h */

#ifndef __BIQUAD_H
#define __BIQUAD_H

//#include <math.h>
//#include <stdlib.h>

#ifndef M_LN2
#define M_LN2	   0.69314718055994530942
#endif

#ifndef M_PI
#define M_PI		3.14159265358979323846
#endif

//* whatever sample type you want */
//typedef double float;

/* this holds the data required to update samples thru a filter */
typedef struct {
    float a0, a1, a2, a3, a4;
    float x1, x2, y1, y2;
}
biquad;

int32_t BiQuad_lpf(float * input_buffer, float * output_buffer, int32_t buffer_size);

extern float BiQuad(float sample, biquad * b);
extern biquad *BiQuad_new(int type, float dbGain, /* gain of filter : 0 */
                          float freq,             /* center frequency : 1000*/
                          float srate,            /* sampling rate : 32768? */
                          float bandwidth);       /* bandwidth in octaves : 0*/

/* filter types */
enum {
    LPF, /* low pass filter */                     /*this' what we want*/
    HPF, /* High pass filter */
    BPF, /* band pass filter */
    NOTCH, /* Notch Filter */
    PEQ, /* Peaking band EQ filter */
    LSH, /* Low shelf filter */
    HSH /* High shelf filter */
};

#endif
