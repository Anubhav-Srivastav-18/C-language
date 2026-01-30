#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'd';
    int contains = 0;
    char str[] = "anubhav bca";

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains++;
            break;
        }
    }
    if (contains)
    {
        printf(" yes it contains");
    }
    else
    {
        printf("it does not contain");
    }

    return 0;
}