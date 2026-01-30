 #include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[3];
    
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    
    return 0;
}
