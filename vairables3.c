#include <stdio.h>
#include <stdbool.h>

int main() {


    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char money = '$';
    char name[] = "Kaden";
    bool Online = true;

    // # after the % changes width and "-" puts them of the left:
    //if you do %04d 0s will replace the spaces
    // adding a + sign shows if its pos of neg
    // a %.3 will show 3 digits after the decimal
    //  1
    // 10
    //100




    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", money);
    printf("%s\n", name);

}