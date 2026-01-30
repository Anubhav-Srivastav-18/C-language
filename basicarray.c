#include <stdio.h>
int main ()
{
    int marks []= {22, 35, 67, 92};
    int* ptr = &marks[0];

    for ( int i = 0; i < 4; i++)
    {
        // printf("the marks at index %d is %d\n", i,marks[i]);
        printf("the marks at index %d is %d\n", i, *ptr );
        ptr++;
    }
    
    return 0;
}