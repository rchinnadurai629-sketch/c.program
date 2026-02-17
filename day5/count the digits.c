#include <stdio.h>
int main() {
    int n;
    int count;
    scanf("%d",&n);
    for (; n!=0;n/=10) {
        count++;
    }
        printf("%d",count);
    return 0 ;
}