#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);

    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        //for increasing
        for(int j = 1;j<=i;j++){
            printf("%d",j);
        }
        //for decreasing
        for(int j = i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}