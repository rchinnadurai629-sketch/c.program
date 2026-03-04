#include <limits.h>
#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int row[r];
    for (int i=0;i<r;i++) {
        row[i]=0;
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
            row[i]+=arr[i][j];
        }
    }
    int max=row[0];
    int min=row[0];
    for (int i=0;i<r;i++) {
        if (max<row[i])
            max=row[i];
        else if (min>row[i])
            min=row[i];
    }
    printf("%d ",max-min);
    return 0;
}