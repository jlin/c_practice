#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#define GET_NAME(var) printf("%s = %d\n", #var, var)

void scope_example();
int swap(int a, int b);
void f1();

int main()
{

	extern int32_t x;
	extern float z;

	uint8_t i = 10;
    long int j = 0L;
    int32_t k = 0L;

	GET_NAME(i);
    GET_NAME(k);
    scope_example();

	return 0;
}

int swap(int a, int b)
{
    return 0;
}

void f1()
{
    int i = 0;    // local variables, exists until block ends
                  // once block ends, variable is destroyed
    char a,b[10];
    while (i>0)
    {
        int x;    // not intializing inside the while, but
    }
}

void scope_example()
{
    int num = 7;
    {
        int num = 10;
        num = num + 10;
        printf ("num = %d\n", num);
    }
    printf ("external num = %d\n", num);
}

