#include <limits.h>
#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int avg=INT_MAX;
    int dept=0;
    for (int i=0;i<r;i++) {
        int sum=0;
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        int avg1=sum/c;
        if (avg1<avg) {
            avg=avg1;
            dept=i;
        }
    }
    printf("%d\n",dept);
    return 0;
}