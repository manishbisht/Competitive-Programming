#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int len){
    for(int i = 0; i <= len - 1 - i; i++)
        if(str[i] != str[len - 1 - i])
            return 0;
    return 1;
}

int makePalindrome(char* str, int len, int pad){
    if(!isPalindrome(str + pad, len - pad))
        return 0;
    printf("%d\n%s", pad, str);
    for(int i = pad - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 1;
}

int main(){
    char str[100];
    gets(str);
    int len = strlen(str), padding = 0;
    while(!makePalindrome(str, len, padding++));
    return 0;
}
