#include <stdio.h>
int main() {
    int num1;
    int num2;
    scanf("%d %d",&num1,&num2);
    if (num1<num2 || num2<num1 ) {
        printf("%d is smallest");
    }
    else {
        printf("%d is equal");
    }
    return 0;
}