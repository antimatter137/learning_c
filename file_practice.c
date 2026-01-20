#include <stdio.h>

int main() {

    char name[50];


    FILE *pFile = fopen("name", "w");

    if(pFile == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    printf("Enter your name: ");
    scanf("%s", &name);

    fprintf(pFile, "%s", name);

    fclose(pFile);

    return 0;
}