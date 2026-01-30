#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

void dispaly(complex c)
{
    printf("the vlaue of complex number is %d + %di \n", c.real, c.imaginary);
}
int main()
{
    complex carr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part \n");
        scanf("%d", &carr[i].real);
        printf("Enter imaginary part \n");
        scanf("%d", &carr[i].imaginary);
        dispaly(carr[i]);
    }

    return 0;
}