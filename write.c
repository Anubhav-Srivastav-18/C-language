// #include <stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("anu.txt", "w");
//     int num = 5519;
//     fprintf(fptr, "%d", num);
//     fclose(fptr);
//     return 0;
// }


#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("anu.txt", "a");
    int num = 5519;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}

