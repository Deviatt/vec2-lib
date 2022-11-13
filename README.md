## Simple Vector 2D library

### Compilation using gcc:
#### test.c:
```c
#include <stdio.h>
#include <vec2.h>

int main(void) {
	vec2_t vec0 = {250, 100};

	printf("%f", vec2_len(vec0));
}
```
#### Compile: ```gcc vec2.c test.c -I.```
#### Output: ```269.258240```

### Example Usage:
Calculate the angle between two vectors
```c
#include <stdio.h>
#include <vec2.h>

int main(void) {
	vec2_t vec0 = {0, 100}, vec1 = {100, 0};

	printf("%f", vec2_brot(vec0, vec1)); // 90
}
```
Rotates a vector by clockwise (around 0)
```c
#include <stdio.h>
#include <vec2.h>

int main(void) {
	vec2_t vec0 = {0, 100};
	vec2_rot(&vec0, 90);

	printf("%f %f", vec0.x, vec0.y); // 100, 0
}
```
Checks if a point is within a circle
```c
#include <stdio.h>
#include <vec2.h>

int main(void) {
	vec2_t vec0 = {70, 70};
	printf("Within point in 100 radius degrees circle? %s %f\n", vec2_len(vec0) < 100 ? "false" : "true", vec2_len(vec0));
}
```
