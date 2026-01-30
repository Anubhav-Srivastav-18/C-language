#include <stdio.h>
#include <string.h>
struct employe{
    int code;
    char name[10];
    float salary;
    
};

int main()
{

    struct employe e1,e2;
    e1.code=5519;
    strcpy(e1.name, "anubhav");
    e1.salary= 43.43;
    
    
    printf("%d \n%s \n%.2f",e1.code,e1.name,e1.salary);
    return 0;
}