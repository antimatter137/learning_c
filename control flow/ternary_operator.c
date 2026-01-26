#include <stdio.h>
#include <stdbool.h>

int main() {
    // ? = shorthand for if-else
    // (condition) ? value_if_true : value_if_false
    
    int hours = 12;
    int minutes = 3;
    char *meridiem = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s\n", hours, minutes, meridiem);

    return 0;
}