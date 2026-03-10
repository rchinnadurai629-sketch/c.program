#include <stdio.h>
int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int a;
    scanf("%d",&a);
    int s=sum(a);
    printf("%d ",s);
}