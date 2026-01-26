#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times = 0;
    double total = 0.0;

    printf("Compound interent calculator\n");

    printf("Enter the principal: ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (%): ");
    scanf("%lf", &rate);
    rate = rate / 100;


    printf("Enter the years: ");
    scanf("%d", &years);

    printf("Enter # of times compounded: ");
    scanf("%d", &times);

    total = principal * pow(1 + rate / times, times * years);
    printf("After %d year(s), the total will be $%.2lf\n", years, total);

    return 0;
}
