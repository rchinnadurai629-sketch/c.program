#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int count=0;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < size; i++) {
        if (arr[i-1]>arr[i]) {
            count++;
        }
    }
    if (count==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}