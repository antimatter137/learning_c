#include <stdio.h>
#include <math.h>

double square(double num){
    return num * num;
}
double root(double num){
    return sqrt(num);
}
double cube(double num){
    return pow(num, 3);
}

int main() {

    double x = square(2);
    double c = root(4);
    double y = cube(3);
    double z = square(4);

    printf("%lf\n", x);
    printf("%lf\n", c);
    printf("%lf\n", y);
    printf("%lf\n", z);

    return 0;
}