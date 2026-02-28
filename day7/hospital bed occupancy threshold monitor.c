#include<stdio.h>
int main() {
    int cap,n;
    scanf("%d\n%d",&cap,&n);
    int fill=0;
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        fill+=i;
        if (fill>(0.9*cap))
            count++;
        n--;
    }
    printf("Final Occupied Beds: %d\n",fill);
    printf("Critical Hours: %d",count);
    return 0;
}