#include <stdio.h>
int main() {
    int num1;
    scanf("%d",&num1);
    if ((num1%4==0 && num1%100 !=0)||(num1%400==0)) {
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }
    return 0;
}