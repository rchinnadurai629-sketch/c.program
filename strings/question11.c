#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    int count=0;
    for (int i=0;i<len;i++) {
        if (str[i]>='0' && str[i]<='9')
            count++;
    }
    printf("%d",count);
    return 0;
}