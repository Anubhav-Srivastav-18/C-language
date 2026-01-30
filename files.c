#include <stdio.h>
int main()
{
   FILE *ptr;
   ptr = fopen("anu.txt","r");
   int num;
   fscanf(ptr, "%d", &num);
   printf(" the vlaue of num is %d\n",num);
   fscanf(ptr, "%d", &num);
   printf(" the vlaue of num is %d\n",num);
   fscanf(ptr, "%d", &num);
   printf(" the vlaue of num is %d\n",num);

   fclose(ptr);
    return 0;

    
}