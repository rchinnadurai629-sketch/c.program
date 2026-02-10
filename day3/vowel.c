#include <stdio.h>
int main() {
    char num;
    scanf("%c",&num);
    if (num=='a'||num=='e'||num=='i'|| num=='o'||num=='u'){
        printf("vowel");
    }
    else {
        printf("Not vowel");
    }
    return 0;
}