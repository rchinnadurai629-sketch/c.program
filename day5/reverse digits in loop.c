#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int rev=0;
    for (;a!=0;a/=10) {
        int rem= a%10;
        rev= rev*10+rem;
    }

        printf("%d ",rev);
    return 0 ;
}