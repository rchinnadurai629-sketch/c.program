#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for (int i =1; i<=a;i++) {
        int rev=1;
        int b=a-i;
        int c=b+rev;

        printf("%d ",c);
    }
    return 0;

}