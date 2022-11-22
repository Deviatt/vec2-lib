#pragma once

#define DEG2RAD 0.017453292519943 // PI / 180
#define RAD2DEG 57.295779513082 // 180 / PI

typedef struct {
	double x;
	double y;
} vec2_t;

/* Adds the components of the vectors together */
void vec2_add(vec2_t *vec0, vec2_t vec1);
vec2_t vec2_nadd(vec2_t vec0, vec2_t vec1);

/* Substracts the components of the second vector from first vector */
void vec2_sub(vec2_t *vec0, vec2_t vec1);
vec2_t vec2_nsub(vec2_t vec0, vec2_t vec1);

/* Rescaling by second vector */
void vec2_mul(vec2_t *vec0, vec2_t vec1);
vec2_t vec2_nmul(vec2_t vec0, vec2_t vec1);

/* Rescaling by double float number */
void vec2_scale(vec2_t *vec0, double mult);
vec2_t vec2_nscale(vec2_t vec0, double mult);

/* Divide the first vector by second vector */
void vec2_div(vec2_t *vec0, vec2_t vec1);
vec2_t vec2_ndiv(vec2_t vec0, vec2_t vec1);

/* Convert vector to unit (normal vector) */
void vec2_norm(vec2_t *vec0);
vec2_t vec2_nnorm(vec2_t vec0);

/* Rotate vector by angle degree */
void vec2_rot(vec2_t *vec0, double deg);
vec2_t vec2_nrot(vec2_t vec0, double deg);

/* Calculate angle degree of between two vectors */
double vec2_brot(vec2_t vec0, vec2_t vec1);

/* Calculate Dot product */
double vec2_dot(vec2_t vec0, vec2_t vec1);

/* Calculate Euclidean length */
double vec2_lenSqr(vec2_t vec0);
double vec2_len(vec2_t vec0);

/* Distance of between two vectors */
double vec2_distSqr(vec2_t vec0, vec2_t vec1);
double vec2_dist(vec2_t vec0, vec2_t vec1);
