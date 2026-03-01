#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];;
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (max==arr[i]) {
            arr[i]=0;
        }
    }
    int sec_max=arr[0];
    for (int i = 0; i < size; i++) {
        if (sec_max < arr[i]) {
            sec_max = arr[i];
        }
    }
    printf("%d\n",sec_max);
    return 0;
}