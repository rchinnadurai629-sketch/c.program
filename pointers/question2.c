#include <stdio.h>
int Max(int arr[],int n) {
    int *p=&arr[0];
    int max=*p;
    for (int i=0; i<n; i++) {
        if (max<*(p+i)) {
            max=*(p+i);
        }
    }
    return max;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int m=Max(arr,size);
    printf("%d", m);
    return 0;
}