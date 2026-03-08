#include<stdio.h>
int main() {
    char str[100];
  fgets(str,sizeof(str),stdin);
    int i=0;
    while (str[i]!='\0') {
        i++;
    }
    printf("%d",i-1);
    return 0;
}