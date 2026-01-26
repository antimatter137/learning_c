#include <stdio.h>

void birthday(int* age);

int main() {

    int age = 25;

    birthday(&age);
    printf("%d", age);



    return 0;
}
void birthday(int* age) {
    (*age)++;

}