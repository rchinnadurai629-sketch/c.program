#include<stdio.h>
int main() {
    int max,n;
    scanf("%d\n%d",&max,&n);
    int sum=0;
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        sum+=i;
        if (sum<=max)
            count++;
        n--;
    }
    printf("Passengers Allowed: %d\n",count);
    printf("Overload: %s",(sum>max)?"Yes":"No");
    return 0;
}