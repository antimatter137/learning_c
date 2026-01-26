#include <stdio.h>
#include <string.h>

int main() {
    //while loops
    int num = 5;
    char name[50] = "";
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';
    while(strlen(name) == 0){
        printf("Name not entered! Enter it: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) -1] = '\0';
    }

    do{
        printf("Enter num greater than 0: ");
        scanf("%d", &num);

    }while(num <= 0);
    printf("Hello, %s\n", name);
    return 0;
}