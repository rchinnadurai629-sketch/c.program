#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d",&c);
    scanf("%d %d",&a,&b);
    switch(c) {
        case 1 :
            printf("sum = %d",a+b);
            break;
        case 2 :
            printf("diffrence = %d",a-b);
            break;
        case 3 :
            printf("product=%d",a*b);
            break;
        case 4 :
            printf("division= %d",a/b);
            break;
        case 5 :
            printf("remainder = %d",a%b);
            break;
        default:
            printf("Invalid Answer");
    }
    return 0;
}