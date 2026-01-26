#include <stdio.h>
// Global scope out here
int add(int x, int y){
    int result = x + y;
    return result;

}
int sub(int x, int y){
    int result = x - y;
    return result;

}

int main() {
    //scope = different functions can't see in others
    int result = sub(3, 4);


    printf("%d", result);
    return 0;
}