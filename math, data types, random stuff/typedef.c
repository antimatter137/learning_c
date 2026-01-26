#include <stdio.h>

typedef char string[];
typedef char Initials[3];

int main() {
    //typedef existing_type new_name;
    string name = "Antimatter 137";
    
    Initials user1 = "A1";
    Initials user2 = "SS";
    Initials user3 = "PS";
    Initials user4 = "ST";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}