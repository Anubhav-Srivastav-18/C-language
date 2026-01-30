#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("You entered: %s", name);
    return 0;
}


// removing new line 
// 1-
// name[strcspn(name, "\n")] = '\0';

// 2-
// if (name[strlen(name) - 1] == '\n')
//     name[strlen(name) - 1] = '\0';





// reading from files with fgets()
// FILE *fp = fopen("data.txt", "r");
// char line[100];

// while (fgets(line, sizeof(line), fp)) {
//     printf("%s", line);
// }

// fclose(fp);
