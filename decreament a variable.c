#include <stdio.h>
int main() {
    int a=6;
    int b=(--a);
    int c=b=(--a);
    printf("%d",c);
    return 0;
}