#include <stdio.h>
int main() {
    char num;
    scanf("%c",&num);
    if (num>='a' && num<='z'|| num>='A' && num<='Z'){
        printf("Alfabet");
    }
    else if (num>=0 || num<=0){
        printf("Digit");
    }
    else {
        printf("Specific character");
    }
    return 0;
}