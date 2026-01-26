#include <stdio.h>

int main() {
    // arrays
    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Antimatter137";

    int location = 3;

    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n%d\n", numbers[location]);
    printf("%c\n", grades[location]);
    return 0;
}
