#include <stdio.h>
int main()
{
    int n1, n2, n3;
    scanf(" %d %d %d ", &n1, &n2, &n3);
    int a[3][10];
    int mul[] = {n1, n2, n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            a[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("the table you want is %d\n", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}