#include <stdio.h>
int sumdigit(int p) {
    int sum = 0;
    while(p) {
        sum += p%10;
        p /= 10;
    }
    return sum;
}
int main() {
    int a;
    scanf("%d",&a);
    int sum = sumdigit(a);
    printf("%d\n",sum);
}