#include <stdio.h>

void greater(int num1, int num2){

    if(num1 > num2) {
        printf("%d is greater than %d", num1, num2);
    }
    else if(num1 < num2){
        printf("%d is less than %d", num1, num2);
    }
    else{
        printf("%d and %d are the same", num1, num2);
    }
}

int main() {
    int num1 = 2;
    int num2 = 1;
    greater(num1, num2);

    return 0;
}