#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int count=0;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i]==arr[j]) {
                arr[j]=0;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i]!=0)
            printf("%d ",arr[i]);
    }
    return 0;
}