#include <stdio.h>
int factorial(int p) {
    int fact = 1;
    while (p > 1) {
        fact = fact * p;
        p--;
    }
    return fact;
}
int main() {
    int a;
    scanf("%d",&a);
    int fact = factorial(a);
    printf("%d\n",fact);
}