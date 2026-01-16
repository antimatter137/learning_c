#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    const int min = 1;
    const int max = 100;
    int guess;
    int tries = 1;

    int randomNum = (rand() % (max - min + 1)) + min;
    printf("*** NUMBER GUESSING GAME ***\n");
    //display for testing purposes
    //printf("%d", randomNum);
    do {
        printf("Guess a number (1 - 100): ");
        scanf("%d", &guess);
        if(guess > randomNum) {
            printf("TOO HIGH\n");
        
        }
        else if(guess < randomNum) {
            printf("TOO LOW\n");
        }
        else{
            break;
        }
        tries++;
    } while (guess != randomNum);
    printf("You Got it in %d tries!\n", tries);
}