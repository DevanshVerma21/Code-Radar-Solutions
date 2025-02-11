#include <stdio.h>

int main(){
    char ch;
    scanf("%d",&ch);
    if (isupper(ch)){
        printf("Uppercase");
    }
    else if (islower(ch)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}