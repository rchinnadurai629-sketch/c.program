#include <stdio.h>
int main() {
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1==num2 && num2==num3 && num3==num1) {
        printf("Equilateral triangle");
    }
    else if (num1 != num2 && num2 != num3 && num3 != num1) {
        printf("Scalenes triangle");

    }
    else {
        printf("Isocele triangle");
    }
}