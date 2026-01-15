#include <stdio.h>
#include <stdbool.h>

int main() {

    // && = AND
    // || = OR
    // ! = NOT
    int temp = 20;
    bool isSunny = false;
    if(!isSunny){
        printf("It is CLOUDY outside\n");
    }
    else{
        printf("It is SUNNY outside\n");
    }

    if(temp <= 0 || temp >= 30){
        printf("The temp is BAD\n");

    }
    else{

        printf("The temp is GOOD\n");
    }

    return 0;
}