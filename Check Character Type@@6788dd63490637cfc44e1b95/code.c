#include <stdio.h>
#include <ctype.c>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=={'a','e','i','o','u'}){
        printf("Vowel");
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else if((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z')){
        printf("Constant");
    }
    else {
        printf("Special Character");
    }
    }