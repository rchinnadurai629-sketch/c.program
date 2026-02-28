#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int suc=0;
    int fail=0;
    while(n!=0) {
        int i;
        scanf("%d",&i);
        if (i==0) {
            suc++;
        }
        else {
            fail++;
        }
        n--;
    }
    printf("Successful: %d\n",suc);
    printf("Cancelled: %d\n",fail);
    printf("Status: %s",(suc<fail)?"Risk":"Safe");
    return 0;
}