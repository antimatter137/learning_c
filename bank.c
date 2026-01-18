#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {
    float balance = 0;
    int choise = 0;
    while(choise != 4) {
        printf("\n*** Welcome to the Bank ***\n");
        printf("\n1: Check balance\n");
        printf("2: Deposit\n");
        printf("3: Withdraw\n");
        printf("4: Exit\n");
        printf("\nWhat do you want to do: ");
        scanf("%d", &choise);
        switch(choise){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                printf("New balance is $%.2f", balance);
                break;
            case 3:
                balance -= withdraw(balance);
                printf("New balance is $%.2f", balance);
                break;
            case 4:
                printf("Thank you for banking with us.\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    }
    return 0;
}

void checkBalance(float balance) {
    printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit() {
    float amount;
    printf("How much do you want to deposit: ");
    scanf("%f", &amount);
    if(amount < 0) {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else {
        return amount;
    }
}

float withdraw(float balance) {
    float amount;
    printf("How much do you want to withdraw: ");
    scanf("%f", &amount);
    if(amount < 0) {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance) {
        printf("Not enough funds!\n");
        return 0;
    }
    else{
        return amount;
    }
}