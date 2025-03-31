#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);

    //upper half
    for(int i = 1;i<=rows;i++){
        for(int j =1;j<=rows-i;j++){
            printf(" ");
        }
        for(int j =1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    //lower half
    for(int i = 1;i>=1;i--){
        for(int j =rows;j<=rows-i;j++){
            printf(" ");
        }
        for(int j =1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}