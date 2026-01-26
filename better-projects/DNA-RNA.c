#include <stdio.h>

void DNADNA(char *DNASequence) {
    for(int i = 0; DNASequence[i] != '\0'; i++) {
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
}

void DNARNA(char *DNASequence) {
    for(int i = 0; DNASequence[i] != '\0'; i++) {
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
}

void RNADNA(char *DNASequence) {
    for(int i = 0; DNASequence[i] != '\0'; i++) {
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
}

int main() {
    char DNASequence[200];
    int choice;
    printf("DNA to DNA: 1\nDNA to RNA: 2\nRNA to DNA: 3\nWhat do you want to do: ");
    scanf("%d", &choice);
    printf("Enter your sequence: ");
    scanf("%s", &DNASequence);
    switch(choice){
        case 1:
            DNADNA(DNASequence);
            break;
        case 2:
            DNARNA(DNASequence);
            break;
        case 3:
            RNADNA(DNASequence);
            break;
    }
    printf("%s\n", DNASequence);
    return 0;
}