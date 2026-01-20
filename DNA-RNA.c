#include <stdio.h>

int main() {
    char DNASequence[200];
    int choise;
    printf("DNA to DNA: 1\nDNA to RNA: 2\nRNA to DNA: 3\nWhat do you want to do: ");
    scanf("%d", &choise);
    printf("Enter your sequence: ");
    scanf("%s", &DNASequence);
    switch(choise){
        case 1:
            for(int i = 0; i < sizeof(DNASequence); i++) {
                if(DNASequence[i] == 'G'){
                    DNASequence[i] = 'C';
                }
                else if(DNASequence[i] == 'C'){
                    DNASequence[i] = 'G';
                }
                else if(DNASequence[i] == 'A'){
                    DNASequence[i] = 'T';
                }
                else if(DNASequence[i] == 'T'){
                    DNASequence[i] = 'A';
                }
            }
            break;
        case 2:
            for(int i = 0; i < sizeof(DNASequence); i++) {
                if(DNASequence[i] == 'G'){
                    DNASequence[i] = 'C';
                }
                else if(DNASequence[i] == 'C'){
                    DNASequence[i] = 'G';
                }
                else if(DNASequence[i] == 'A'){
                    DNASequence[i] = 'U';
                }
                else if(DNASequence[i] == 'T'){
                    DNASequence[i] = 'A';
                }
            }
            break;
        case 3:
            for(int i = 0; i < sizeof(DNASequence); i++) {
                if(DNASequence[i] == 'G'){
                    DNASequence[i] = 'C';
                }
                else if(DNASequence[i] == 'C'){
                    DNASequence[i] = 'G';
                }
                else if(DNASequence[i] == 'A'){
                    DNASequence[i] = 'T';
                }
                else if(DNASequence[i] == 'U'){
                    DNASequence[i] = 'A';
                }
            }
            break;
    }
    printf("%s\n", DNASequence);
    return 0;
}