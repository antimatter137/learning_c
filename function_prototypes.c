#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);
bool ageCheck(int age);
//function prototype

int main() {
    //function prototypes wtf is this
    hello("Kaden", 14);
    if(ageCheck(30)){
        printf("You are old enough!\n");
    }
    else{
        printf("You must be 16+\n");
    }
    return 0;
}

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d\n", age);
}

bool ageCheck(int age){
    return age >= 16;

}