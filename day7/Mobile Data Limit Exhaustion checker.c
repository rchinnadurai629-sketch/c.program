#include <stdio.h>
int main() {
    int total;
    scanf("%d",&total);
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0) {
        int i;
        scanf("%d",&i);
        total-=i;
        if (total>=0)
            count++;
        if(total<=0)
            n--;
    }

    printf("\nDaily Used :%d\n",count);
    printf("Remaining data :%dGB",total);
}
    return 0 ;
