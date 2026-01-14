#include <stdio.h>

int main() {

    int age = 0;

    printf("Enter an age: ");
    scanf("%d", &age);

    if(age >= 65){
        printf("You are a senior");
    }
    else if(age >= 18){
        printf("You are an adult");
    }

    else if(age < 0){
        printf("you arn't a person");

    }
    else if(age == 0){
        printf("you small");
    }

    else{
        printf("You are a minor");
    }

    return 0;
}
