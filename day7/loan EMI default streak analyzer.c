#include< stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int strkM=0;
    int strk=0;
    while (n!=0) {
        int m;
        scanf("%d",&m);
        if (m==0)
            strk++;
        else
            strk=0;
        if (strkM<strk)
            strkM=strk;
        n--;
    }
    printf("Longest Default Streak: %d",strkM);
    return 0;
}