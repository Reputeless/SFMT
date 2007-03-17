#ifndef SFMT_PARAMS19937_H
#define SFMT_PARAMS19937_H

#define POS1	122
#define SL1	18
#define SL2	1
#define SR1	11
#define SR2	1
#define MSK1	0xdfffffefU
#define MSK2	0xddfecb7fU
#define MSK3	0xbffaffffU
#define MSK4	0xbffffff6U
#define PARITY1	0x00000001U
#define PARITY2	0x00000000U
#define PARITY3	0x00000000U
#define PARITY4	0x13c9e684U
#define ALTI_SL2_PERM \
(vector unsigned char)(1,2,3,23,5,6,7,0,9,10,11,4,13,14,15,8)
#define ALTI_SL2_PERM64 \
(vector unsigned char)(1,2,3,4,5,6,7,31,9,10,11,12,13,14,15,0)
#define ALTI_SR2_PERM \
(vector unsigned char)(7,0,1,2,11,4,5,6,15,8,9,10,17,12,13,14)
#define ALTI_SR2_PERM64 \
(vector unsigned char)(15,0,1,2,3,4,5,6,17,8,9,10,11,12,13,14)
#define IDSTR	"SFMT-19937:122-18-1-11-1:dfffffef-ddfecb7f-bffaffff-bffffff6"

#endif /* SFMT_PARAMS19937_H */
