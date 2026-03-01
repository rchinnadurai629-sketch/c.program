#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0;
    int act=0;
    for(int i = 0; i < size; i++) {
        sum+=arr[i];
        act+=i+1;
    }
    printf("%d", act-sum);
    return 0;
}