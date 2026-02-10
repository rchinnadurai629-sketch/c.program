#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num<10 && num>=0) {
        printf("Digit");
    }
    else {
        printf("Invalid digit");
    }
    return 0;
}