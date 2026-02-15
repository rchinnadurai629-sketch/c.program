#include <stdio.h>
int main() {
    int a;
    int b=0;
    scanf("%d",&a);
    for (int i=2;i<=a;i+=2) {
        b+=i;
    }

        printf("%d ",b);
    return 0 ;
}