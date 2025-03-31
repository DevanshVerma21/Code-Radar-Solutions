#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            if(rows==j){
                printf("%d ",j);
            }
            else{
                j++;
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}