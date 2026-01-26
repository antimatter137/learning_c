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
    for(int i = 0; i < n; i++) {
        printf("Enter name for player %d: ", i + 1);
        scanf("%s", players[i].name);
        printf("Enter score for player%d: ", i + 1);
        scanf("%d", &players[i].score);
    }
    for(int i = 0; i < n; i++) {
        printf("\nPLAYERS\n");
        printf("%s: ", players[i].name);
        printf("%d\n", players[i].score);
    }
    free(players);
    return 0;
}