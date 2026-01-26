#include <stdio.h>
#include <string.h>


int main() {


    char item[50] = "";
    float price = 0.0f;
    int amount = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What do you want to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';


    printf("What is the price for each: ");
    scanf("%f", &price);

    printf("How many would you like: ");
    scanf("%d", &amount);

    total = price * amount;

    printf("\nYou have bought %d %s/s\n", amount, item);
    printf("The total is: %c%.2f\n", currency, total);

    return 0;
}