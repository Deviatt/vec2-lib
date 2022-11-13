## Simple Vec2 library

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
#### Compile: ```gcc vec2.c test.c -I```
#### Output: ```269.258240```

### Example Usage:
```c
  #include <stdio.h>
  #include <vec2.h>

  int main(void) {
      vec2_t vec0 = {0, 100}, vec1 = {100, 0};

      printf("%f", vec2_brot(vec0, vec1)); // 90
  }
```
