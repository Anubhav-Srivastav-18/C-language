// Number Swapping 
#include <stdio.h>

int main() {
   int a;
   int b;
   int temp;
   
   printf("Enter Two Numbers :");
   scanf("%d %d",&a,&b);

   temp = a;
   a=b;
   b=temp;
   
    printf("After Swapping : ");
    printf("a is %d and b is %d",a,b);

    return 0;
}