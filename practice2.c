#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int score;
} Player;

int main() {
    int n = 0;
    printf("How many players: ");
    scanf("%d", &n);
    Player *players = malloc(n * sizeof(Player));
    if(players == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    FILE *pFile = fopen("scores.txt", "w");
    if(pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        printf("Enter name for player %d: ", i + 1);
        scanf("%s", players[i].name);
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &players[i].score);
        fprintf(pFile, "%s: %d\n", players[i].name, players[i].score);
    }
    fclose(pFile);
    printf("Sucess writing file\n");
    pFile = fopen("scores.txt", "r");
    if(pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("\nPLAYERS\n");
    for(int i = 0; i < n; i++) {

        fscanf(pFile, "%s %d", players[i].name, &players[i].score);
        printf("%s %d\n", players[i].name, players[i].score);
    }
    fclose(pFile);
    free(players);
    return 0;
}