#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a>='A' && a<='Z') {
        printf("Uppercase letter");
    }
    else if (a>='a' && a<='z') {
        printf("Lowercase letter");
    }
    else {
        printf("Not a alfabetic letter");
    }
}

