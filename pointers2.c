#include <stdio.h>

void change(int *age, int *times);

int main() {

    int age = 25;
    int times = 0;
    change(&age, &times);

    return 0;
}

void change(int *age, int *times) {
    (*age)++;
    (*times)++;
    printf("%d\n", *age);
    printf("%d\n", *times);
    

}