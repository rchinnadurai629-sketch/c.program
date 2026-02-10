#include <stdio.h>
int main() {
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>=num2) {
        printf("%d is largest number",num1);
    }
    else if (num2>=num3) {
        printf("%d is largest number",num2);
    }
    else {
        printf("%d is largest number",num3);
    }