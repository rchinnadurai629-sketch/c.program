#include <stdio.h>
int main() {
    int a;
    int b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    switch(c) {
        case '+' :
            printf("Result = %d",a+b);
            break;
        case '-' :
            printf("Result = %d",a-b);
            break;
        case '*' :
            printf("Result =%d",a*b);
            break;
        case '/':
            printf("Result = %d",a/b);
            break;
        case '%':
            printf("Result = %d",a%b);
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}