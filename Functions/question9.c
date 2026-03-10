#include <stdio.h>
int reverse(int n){
    int rev = 0;
    while(n) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
int pal(int p) {
    int rev=reverse(p);
    if (p==rev) printf("Palindrome");
    else printf("Not Palindrome");
}
int main() {
    int a;
    scanf("%d",&a);
    pal(a);
}