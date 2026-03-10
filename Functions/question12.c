#include <stdio.h>
void leap_check(int p) {
    if ((p%4==0 && p%100!=0)||(p%400==0))
        printf("Leap Year");
    else printf("Not Leap Year");
}
int main() {
    int a;
    scanf ("%d",&a);
    leap_check(a);
}