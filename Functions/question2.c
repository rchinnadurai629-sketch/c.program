#include <stdio.h>
void Max(int p,int q) {
    printf("%d",(p>q)?p:q);
}
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    Max(a,b);
}