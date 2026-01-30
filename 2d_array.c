#include <stdio.h>
int main()
{
    int a[2][2];

    for ( int i = 0; i < 2; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            printf("Enter the value of A[%d][%d] ", i,j);
           scanf("%d ", &a[i][j]);
        }
        
    }
     for ( int i = 0; i < 2; i++)
    {
        for ( int j = 0; j < 2; j++)
        {
            printf(" the value of A[%d][%d] is %d\n", i , j , a[i][j]);
          
        }
        
    }
    return 0;
}