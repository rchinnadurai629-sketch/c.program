#include <stdio.h>
void prime(int n){
    int prime=0;
    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            prime++;
            break;
        }
    }
    if (prime != 0) printf("Not prime");
    else printf("Prime");
}
int main() {
    int a;
    scanf("%d",&a);
    prime(a);
}