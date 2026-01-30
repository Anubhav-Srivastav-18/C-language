#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Table Of :\n", a[4]);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", a[4], i, a[4] * i);
    }

    return 0;
}
