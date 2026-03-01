#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int count=0;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    int eve=0;
    int odd=0;
    for (int i = 1; i <= size; i++) {
        if (arr[i]%2==0) {
            eve++;
        }
        else
            odd++;
    }
    printf("Even:%d Odd:%d",eve,odd);
    return 0;
}