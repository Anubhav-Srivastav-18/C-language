#include <stdio.h>
int main()
{
    int marks[3];
    for (int i=0;i<=2;i++) {
        printf("the numbmer are \n");
        scanf("%d", &marks[i]);
    }
    
   printf("marks 1 and marks 2 and marks 3 is %d %d %d", marks[0], marks[1], marks[2]);
   return 0;
}