#include<stdio.h>
int main() {
    int n,fuel;
    scanf("%d",&fuel);
    scanf("%d",&n);
    int sum=0;
    int count=0;
    while (n!=0) {
        int  i;
        scanf("%d",&i);
        sum+=i;
        if (sum>fuel) {
            sum-=i;
            break;
        }
        count++;
        n--;
    }
    printf("Completed Trip: %d\n",count);
    printf("Remaining Fuel: %d\n",fuel-sum)
    return 0;
}