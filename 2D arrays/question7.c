#include <stdio.h>
#include <limits.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
    int count = 0;
    for (int i=0;i<r;i++) {
        int min = arr[i][0];
        int col = 0;
        for (int j=1;j<c;j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                col = j;
            }
        }
        int found = 1;
        for (int k=0;k<r;k++) {
            if (arr[k][col] > min) {
                found = 0;
                break;
            }
        }

        if (found) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
