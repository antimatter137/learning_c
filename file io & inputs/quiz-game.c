#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {"What is the largest planet in the solar system?\n", 
                             "What is the hottest planet?\n", 
                             "What planet has the most moons?\n", 
                             "It the Earth flat?\n"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune", 
                           "A. Mercury\nB. Venus\nC. Earth\nD. Mars", 
                           "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn", 
                           "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;
    printf("*** Quix Game ***\n");
    for(int i = 0; i < questionCount; i++) {
        printf("\n%s\n", questions[i]);
        printf("%s\n", options[i]);
        printf("\nEnter your choise: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]) {
            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG!\n");
        }
    }
    printf("You got %d/%d correct!\n", score, questionCount);


    return 0;
}