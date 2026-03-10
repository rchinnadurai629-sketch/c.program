#include <stdio.h>
void Area_c(int p) {
    printf("%.2f",3.14*p*p);
}
int main() {
    int a;
    scanf("%d",&a);
    Area_c(a);
}