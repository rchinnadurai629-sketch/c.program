#include <stdio.h>
int main() {
    int a;
    int digit=0;
    scanf("%d",&a);

    for (;a>0;a/=10) {
        digit+= a%10;
    }
    printf("%d ",digit);

    return 0 ;
}