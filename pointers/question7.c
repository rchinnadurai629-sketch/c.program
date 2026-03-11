#include <stdio.h>
#include <string.h>

void palindrome(char *str) {
    int left = 0, right = strlen(str) - 1;
    int found=1;
    while (left < right) {
        if (*(str + left) != *(str + right)) {
            found = 0;
            break;
        }
        left++;right--;
    }
    if (found) printf("YES");
    else printf("NO");
}
int main() {
    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str)-1] = '\0';
    palindrome(&str[0]);
}