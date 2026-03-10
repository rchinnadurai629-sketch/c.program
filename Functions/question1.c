#include <stdio.h>
float simple_interest(int a, int b, int c) {
    return (a*b*c)/100;
}
int main() {
    int p,r,t;
    scanf("%d %d %d",&p,&r,&t);
    float interst=simple_interest(p,r,t);
    printf("%.2f",interst);
}