#include <stdio.h>
int pow(int p, int q) {
    int result = 1;
    for (int i=0;i<q;i++) {
        result = result * p;
    }
    return result;
}
int main() {
    int a,b;
    scanf ("%d %d",&a,&b);
    int power=pow(a,b);
    printf("%d",power);
}