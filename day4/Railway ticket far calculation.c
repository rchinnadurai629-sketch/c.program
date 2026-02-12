#include <stdio.h>
int main() {
    int class;
    int age;
    scanf("%d\n%d",&class,&age);
    int fare;
    switch(class) {
        case 1:
            fare=300;
            if (age<12){
                printf("Fare:%d",fare-=(0.50*fare));
                break;
            }
             else if (age>=60){
                 printf("Fare:%d",fare-=(0.33*fare));
             }
            break;
        case 2:
            fare=1000;

            if (age<12) {
                printf("Fare:%d",fare-=(0.50*fare));
            }
            else if (age>=60) {
                printf("No discount");
            }
            break;
       default:
            printf("No class");
       }
    return 0;
}