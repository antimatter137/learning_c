#include <stdio.h>

int main() {

    char day = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &day);
    switch(day){
        case 'M':
            printf("It is monday");
            break;
        case 'T':
            printf("It is tuesday");
            break;
        case 'W':
            printf("It is wednesday");
            break;
        case 'R':
            printf("It is thursday");
            break;
        case 'F':
            printf("It is friday");
            break;
        case 'S':
            printf("It is saturday");
            break;
        case 'U':
            printf("It is sunday");
            break;
        default:
        printf("Enter a letter of a day");
        break;
    }


    return 0;
}