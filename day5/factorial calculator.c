#include <stdio.h>
int main() {
    int a;
    int multi=1;
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        multi*=i;
    }
    printf("%d",multi);
    return 0 ;
