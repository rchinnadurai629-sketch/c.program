#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);

    int first=0;
    int second=1;

    if(1<=a) {
        printf("%d ",first);
    }
    if(2<=a) {
        printf("%d ",second);
    }

    for (int i = 2; i < a; i++) {
        int temp = first + second;
        first = second;
        second = temp;

        printf("%d ",temp);
    }

    return 0 ;
