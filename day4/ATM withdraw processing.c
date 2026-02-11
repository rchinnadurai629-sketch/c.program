#include <stdio.h>
int main() {

    int at;
    int b;
    int wa;

    scanf("%d\n%d\n%d",&at,&b,&wa);
    switch(at) {
        case 1:
            if (b>=wa) {
                printf("Transaction succesful");
            }
             else {
                 printf("Low balance");
             }
            break;
        case 2:
            if (5000>=wa) {
                printf("Transction successful");
            }
            else if (b>=wa) {
                printf("Limited exceeded");
            }
            else {
                printf("Low balance");
            }

             break;

       default:
            printf("Transaction failed");
       }
    return 0;
}