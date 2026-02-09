#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c=a>=b;
    int d=b<=b;
    printf("%d %d",c,d);
    return 0;
}