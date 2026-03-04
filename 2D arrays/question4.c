#include<stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[r*c];
    int k=0;
    bool found=false;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            arr2[k++]=arr[i][j];
        }
    }
    for (int i=0;i<r*c;i++) {
        int ele=arr2[i];
        for (int j=i+1;j<r*c;j++) {
            if (arr2[j]==ele) {
                found=true;
                printf("%d ",ele);
                break;
            }
        }
        if (found) break;
    }
    return 0;
}
