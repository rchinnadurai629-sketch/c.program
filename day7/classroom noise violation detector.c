#include <stdio.h>
int main() {
    int nv;
    int lvs;
    int count=0;
    int max=0,b=0;
    scanf("%d",&nv);
    int i=1;
    while(i<=nv) {
        scanf("%d",&lvs);
        if (lvs>70) {
            count++;
            max++;
            if (max>b)
                b=max;
        }
        else {
            max=0;
        }
        i++;
    }
    printf("Noise Violations:%d\n",count);
    printf("Longest Violation Streak:%d\n",b);
    return 0 ;
}