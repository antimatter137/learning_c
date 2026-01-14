#include <stdio.h>

int main() {

    // integer vairable
    int age = 25;
    int year = 2026;
    int amount = 2;
    float gpa = 2.5;
    float price = 19.99;
    float temp = -10.1;


    printf("The temp is %.1f°\n", temp);
    printf("The price is $%.2f\n", price);
    printf("Your gpa is %.1f\n", gpa);
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items", amount);

    return 0;
}