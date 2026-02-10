#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    printf("pre:%d",++a);
    printf(" post:%d",a++);
    return 0;
}