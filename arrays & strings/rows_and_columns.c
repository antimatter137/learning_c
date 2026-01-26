#include <stdio.h>

int main(){
    int rows, columns;
    char symbol;
    printf("Enter the # of rows: ");
    scanf("%d", &rows);
    printf("Enter the # of columns: ");
    scanf("%d", &columns);
    printf("Enter the symbol: ");
    scanf(" %c", &symbol);
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                printf("%c", symbol);
            }
            printf("\n");

        }


    return 0;
}