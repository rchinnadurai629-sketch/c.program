#include <stdio.h>
int main() {
    int ct;
    int units;
    scanf("%d %d",&ct,&units);
    switch(ct) {
        case 1 :
            if (units<=100) {
                printf("Bill:%d",units*3);
            }
            else {
                printf("Bill:%d",(100*3)+(80*5)+(-80));
            }
            break;
        case 2:
            if (units<=100) {
                printf("Bill:%d",units*7);
            }
            else {
                printf("Bill:%d",(100*7)+(20*10));
            }
            break;
        default:
            printf("Enter valid input");
    }
    return 0;
}