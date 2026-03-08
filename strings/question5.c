#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int j=len-2;
    int pal=1;
    for (int i=0;i!=j;i++) {
        if (str[i]!=str[j]) {
            pal=0;
            break;
        }
        j--;
    }
    if (pal) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}