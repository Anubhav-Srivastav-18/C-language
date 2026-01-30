#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1 ,e2 ,e3;
    printf("Enter Code of e1 ");
    scanf("%d",&e1.code);
    printf("Enter Name e1 ");
    scanf("%s",&e1.name);
    printf("Enter Salary e1 ");
    scanf("%f",&e1.salary);

    printf("%d %s %f\n" , e1.code , e1.name , e1.salary);

      printf("Enter Code e2 ");
    scanf("%d",&e2.code);
    printf("Enter Name e2 ");
    scanf("%s",&e2.name);
    printf("Enter Salary e2 ");
    scanf("%f",&e2.salary);

    printf("%d %s %f\n" , e2.code , e2.name , e2.salary);
    
      printf("Enter Code e3 ");
    scanf("%d",&e3.code);
    printf("Enter Name e3 ");
    scanf("%s",&e3.name);
    printf("Enter Salary e3 ");
    scanf("%f",&e3.salary);

    printf("%d %s %f\n" , e3.code , e3.name , e3.salary);
    return 0;
}