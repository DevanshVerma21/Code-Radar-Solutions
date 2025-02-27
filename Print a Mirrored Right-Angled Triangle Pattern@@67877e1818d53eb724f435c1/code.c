#include <stdio.h>

int main(){
    
    int rows;
    scanf("%d",&rows);

    for (int i = 1 ; i<=rows;i++){
        for(int a=1;a<=rows-i;a++){
            printf(" ");
        }
        for(int b=1;b<=i;b++){
            printf("*");
        }
    printf("\n");
    }
}