#include <math.h>
#include <vec2.h>

void vec2_add(vec2_t *vec0, vec2_t vec1) {
	vec0->x += vec1.x, vec0->y += vec1.y;
}

vec2_t vec2_nadd(vec2_t vec0, vec2_t vec1) {
	vec0.x += vec1.x, vec0.y += vec1.y;
	return vec0;
}

void vec2_sub(vec2_t *vec0, vec2_t vec1) {
	vec0->x -= vec1.x, vec0->y -= vec1.y;
}

vec2_t vec2_nsub(vec2_t vec0, vec2_t vec1) {
	vec0.x -= vec1.x, vec0.y -= vec1.y;
	return vec0;
}

void vec2_mul(vec2_t *vec0, vec2_t vec1) {
	vec0->x *= vec1.x, vec0->y *= vec1.y;
}

vec2_t vec2_nmul(vec2_t vec0, vec2_t vec1) {
	vec0.x *= vec1.x, vec0.y *= vec1.y;
	return vec0;
}

void vec2_scale(vec2_t *vec0, double mult) {
	vec0->x *= mult, vec0->y *= mult;
}

vec2_t vec2_nscale(vec2_t vec0, double mult) {
	vec0.x *= mult, vec0.y *= mult;
	return vec0;
}

void vec2_div(vec2_t *vec0, vec2_t vec1) {
	vec0->x /= vec1.x, vec0->y /= vec1.y;
}

vec2_t vec2_ndiv(vec2_t vec0, vec2_t vec1) {
	vec0.x /= vec1.x, vec0.y /= vec1.y;
	return vec0;
}

double vec2_dot(vec2_t vec0, vec2_t vec1) {
	return vec0.x * vec1.x + vec0.y * vec1.y;
}

double vec2_lenSqr(vec2_t vec0) {
	return vec0.x * vec0.x + vec0.y * vec0.y;
}

double vec2_len(vec2_t vec0) {
	return sqrt(vec2_lenSqr(vec0));
}

void vec2_norm(vec2_t *vec0) {
	vec2_scale(*&vec0, 1 / vec2_len(*vec0));
}

vec2_t vec2_nnorm(vec2_t vec0) {
	return vec2_nscale(vec0, 1 / vec2_len(vec0));
}

double vec2_distSqr(vec2_t vec0, vec2_t vec1) {
	return vec2_lenSqr(vec2_nsub(vec0, vec1));
}

double vec2_dist(vec2_t vec0, vec2_t vec1) {
	return sqrt(vec2_distSqr(vec0, vec1));
}

void vec2_rot(vec2_t *vec0, double deg) {
	deg = -deg * DEG2RAD;

	double x = vec0->x, y = vec0->y, s = sin(deg), c = cos(deg);
	vec0->x = x * c - y * s, vec0->y = x * s + y * c;
}

vec2_t vec2_nrot(vec2_t vec0, double deg) {
	deg = -deg * DEG2RAD;

	double x = vec0.x, y = vec0.y, s = sin(deg), c = cos(deg);
	vec0.x = x * c - y * s, vec0.y = x * s + y * c;
	return vec0;
}

double vec2_brot(vec2_t vec0, vec2_t vec1) {
	return RAD2DEG * acos(vec2_dot(vec0, vec1) / sqrt(vec2_lenSqr(vec0) * vec2_lenSqr(vec1)));
}