#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char computerChoise(){
    srand(time(NULL));
    int randomNum = (rand() % (3 - 1 + 1)) + 1;
    switch(randomNum){
        case 1:
            return 'R';
            break;
        case 2:
            return 'P';
            break;
        case 3:
            return 'S';
            break;
    }
}
int decide(char clank, char userChoise) {
    if(clank == 'R' && userChoise == 'S' || clank == 'P' && userChoise == 'R' || clank == 'S' && userChoise == 'P' ){
        printf("Robot won! %c beats %c", clank, userChoise);
    }
    else if(clank == userChoise){
        printf("You tie! %c tied with %c", clank, userChoise);
    }
    else{
        printf("You win! %c won against %c", userChoise, clank);
    }

}
int main() {
    char userChoise;
    printf("Enter your choise (R, P, S): ");
    scanf(" %c", &userChoise);
    decide(computerChoise(), userChoise);
    return 0;
}