#include <stdio.h>

int main(){
    int rows;
    char ch;
    scanf("%d",&rows);
    for(int i = 1; i <= rows ; i++){
        ch = 'A';
        for(int j = 1; j <= i ; j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}







































