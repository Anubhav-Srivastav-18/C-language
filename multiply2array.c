#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {10, 20, 30, 40, 50};
    int result[5];
    int n = 5;

    // Multiply arrays element-wise
    for (int i = 0; i < n; i++)
    {
        result[i] = a[i] * b[i];
    }

    // Print result
    printf("Result array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
