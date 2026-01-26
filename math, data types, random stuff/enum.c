#include <stdio.h>
typedef enum{
    SUNDAY = 1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}Day;

int main() {

    // A user defined data type
    
    Day today = MONDAY;
    if(today == SUNDAY || today == SATURDAY) {
        printf("Its the weekend");

    }
    else {
        printf("Its a weekday");
    }

    return 0;
}
