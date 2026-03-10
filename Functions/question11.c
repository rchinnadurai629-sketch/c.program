#include <stdio.h>
int digit_count(int a) {
    int count = 0;
    while (a != 0) {
        count++;
        a = a / 10;
    }
    return count;
}

int main() {
    int a;
    scanf ("%d",&a);
    int digit = digit_count(a);
    printf("%d", digit);
}