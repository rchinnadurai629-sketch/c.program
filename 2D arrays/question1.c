#include <stdio.h>
int main() {
    int r,c;
    scanf("%d", &r);
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max1=arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max1<arr[i][j]) {
                max1=arr[i][j];
            }
        }
    }
    int max2=arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max2<arr[i][j] && max1!=arr[i][j]) {
                max2=arr[i][j];
            }
        }
    }
    printf("%d ", max2);
    return 0;
}