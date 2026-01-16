#include <stdio.h>
//break and continue

int main() {
    for(int i = 1; i <= 10; i++){
        if(i == 4){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}