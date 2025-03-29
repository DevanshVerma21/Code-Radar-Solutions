#include <stdio.h>

int main(){
    int rows;
    char ch;
    scanf("%d",&ch);
    for(int i = rows;i>=1;i--){
        ch = 'A';
        for(int j = 1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}