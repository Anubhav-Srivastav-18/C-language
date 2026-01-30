#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

int main()
{
    complex c = {2, 3};
    printf("The value of complex no. is %d + i%d", c.real, c.imaginary);
    return 0;
}