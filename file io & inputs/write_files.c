#include <stdio.h>

int main() {
    //Writing files

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "This is a sussy file\nIsn't it?";



    if(pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    fclose(pFile);


    return 0;
}