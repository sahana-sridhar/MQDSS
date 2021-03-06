#ifndef GF31_H
#define GF31_H

typedef unsigned short gf31;

gf31 mod31(gf31 x);

void vgf31_unique(gf31 *out, gf31 *in);

void vgf31_shorten(gf31 *out, gf31 *in);
void vgf31_shorten_unique(gf31 *out, gf31 *in);

/* Generates a sequence of len random GF31 elements. */
void gf31_nrand(gf31 *out, const int len, const unsigned char *seed, const int seedlen);
void gf31_nrand_uchar(unsigned char *out, const int len, const unsigned char *seed, const int seedlen);
void gf31_nrand_schar(signed char *out, const int len, const unsigned char *seed, const int seedlen);

/* Unpacks an array of packed GF31 elements to one element per byte.
This function assumes that there is sufficient empty space available at the end
of the array to unpack. */
void gf31_nunpack(gf31 *out, const unsigned char *in, const int n);

/* Packs an array of GF31 elements from bytes to concatenated 5-bit values.
This function assumes that there is sufficient space available to unpack. */
void gf31_npack(unsigned char *out, const gf31 *in, const int n);

#endif
