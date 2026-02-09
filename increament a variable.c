#include <stdio.h>
int main() {
    int a=5;
    int b=(++a);
    int c=b=(++a);
    printf("%d",c);
    return 0;
}