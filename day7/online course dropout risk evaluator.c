#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        if (i==0)
            count++;
        n--;
    }
    printf("Inactive Weeks: %d\n",count);
    printf("Risk Status: %s",(count>=3)?"High":"Low");
    return 0;
}