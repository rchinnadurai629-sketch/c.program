#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d" "%d",&a,&b);
    int c=a^b;
    int d=c^b;
    int e=c^d;
    printf("%d %d",e,d);
    return 0;
}