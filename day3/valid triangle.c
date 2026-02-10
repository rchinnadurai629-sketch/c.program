#include <stdio.h>
int main() {
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1==60 && num2==60 && num3==60) {
        printf("Valid triangle");
    }
    else {
        printf("Invalid triangle");
    }
}