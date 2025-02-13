#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i = 0;i<=rows;i++){
        if(i==rows){
            printf("*");
        }
    }
    printf("\n");
}