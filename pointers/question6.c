#include <stdio.h>
void reverse(int *arr, int size) {
    int arr2[size];
    int j=size-1;
    for (int i = 0; i < size; i++) {
        arr2[j--] = *(arr+i);
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    reverse(&arr[0], size);
}