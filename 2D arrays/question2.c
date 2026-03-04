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
    int max2=arr[0][0];
    for (int i = 1; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max1 < arr[i][j]) {
                max1 = arr[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max2 < arr[i][j] && max1 != arr[i][j]) {
                max2 = arr[i][j];
            }
        }
    }
    int min1=0;
    int min2=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (min1 > arr[i][j]) {
                min1 = arr[i][j];
            }
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (min2 > arr[i][j] && min1 != arr[i][j]) {
                min2 = arr[i][j];
            }
        }
    }
    int pr1=max1*max2;
    int pr2=min1*min2;
    (pr1>pr2)?printf("%d ",pr1):printf("%d",pr2);
    return 0;
}