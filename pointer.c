#include <stdio.h>
void changetotentimes(int*);
void changetotentimes(int* a){
    *a = *a * 10;
}
int main ()
{
    int x =32;
    printf("the value is %d \n", x);
    changetotentimes(&x);
    printf("the value is %d",x);

    return 0;
}