#include <stdio.h>
int main()
{
   FILE *ptr;
   char name1[10],name2[10];
   int salary1,salary2;
   ptr = fopen("anu.txt","w");
   
   printf("Employe Name1 : \n");
   scanf("%s", &name1);
   printf("Employe salary1 : \n");
   scanf("%d", &salary1);
   printf("Employe Name2 : \n");
   scanf("%s", &name2);
   printf("Employe salary2 : \n");
   scanf("%d", &salary2);

   fprintf(ptr, "%s", name1);
   fprintf(ptr, "%s", ", ");
   fprintf(ptr, "%d", salary1);
   fprintf(ptr, "%c", '\n');

   fprintf(ptr, "%s", name2);
   fprintf(ptr, "%s", ", ");
   fprintf(ptr, "%d", salary2);
   fprintf(ptr, "%c", '\n');
    return 0;

    
}