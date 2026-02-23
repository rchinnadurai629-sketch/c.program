#include <stdio.h>
int main() {
    int n,m;
    int count=0;
    int sum;
    scanf("%d %d",&n,&sum);
    int i=0;
    while(i<n) {
        scanf("%d",&m);
        sum=sum+m;
        if (sum<2000)
            count++;
        i++;
    }

    printf("Final Balance :%d\n",sum);
    printf("Low Balance Days :%d\n",count);
    return 0 ;
}