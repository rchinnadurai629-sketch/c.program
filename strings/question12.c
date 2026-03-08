#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    int count=0;
    for (int i=0;i<len;i++) {
        if (str[i]=='@' || str[i]=='$' || str[i]=='%' || str[i]=='&' || str[i]=='#')
            count++;
    }
    printf("%d",count);
    return 0;
}