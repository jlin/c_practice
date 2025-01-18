#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

#define GET_NAME(var) printf("%s = %d\n", #var, var)

int main() {

	extern int32_t x;
	extern float z;

	uint8_t i = 10;

	GET_NAME(i);

	return 0;
}

int swap(int a, int b){
    return 0;
}