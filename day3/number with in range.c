#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num>=10 && num<=20) {
        printf("Number is with in range");
    }
    else {
        printf("Invalid range");
    }
}