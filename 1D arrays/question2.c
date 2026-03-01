#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int m;
    scanf("%d",&m);
    int count=0;
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++) {
        if (m==arr[i]) {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}