#include <stdio.h>
int Rev_digit(int p) {
    int rev = 0;
    while(p) {
        rev*=10;
        rev += p%10;
        p /= 10;
    }
    return rev;
}
int main() {
    int a;
    scanf("%d",&a);
    int rev = Rev_digit(a);
    printf("%d\n",rev);
}