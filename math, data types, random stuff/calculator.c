#include <stdio.h>
#include <stdlib.h>

double num1 = 0.0;
double num2 = 0.0;
char operator = '\0';
double result = 0.0;

int main() {
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            if(num2 == 0){
                printf("Wow that aint gonna work\n");
                exit(0);
            }
            else{
                result = num1 / num2;
            }
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("Enter an operator!!\n");
            exit(0);

    }
    printf("Result is %lf", result);
    return 0;
}