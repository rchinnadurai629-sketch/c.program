#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int bo=0;
    for (int i=0;i<r;i++) {
        int co=0;
        for (int j=0;j<c;j++) {
            int unco=0;
            int ele=arr[i][j];
            for (int k=0;k<c;k++) {
                if (ele!=arr[i][k]) {
                    unco++;
                }
            }
            if (unco>co) {
                co=unco;
                bo=i;
            }
        }
    }
    printf("%d",bo);
    return 0;
}