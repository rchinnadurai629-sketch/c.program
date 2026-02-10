#include <stdio.h>
int main() {
    int score;
    scanf("%d",&score);
    if (score>100 || score<0) {
        printf("Invalid input");
    }
    else if (score>=90 && score<=100) {
        printf("Grade A");
    }
    else if (score>=75 && score<90) {
        printf("Grade B");
    }
    else if (score>=50 && score<75) {
        printf("Grade C");
    }
    else {
        printf("Grade F");
    }
    return 0;
}

