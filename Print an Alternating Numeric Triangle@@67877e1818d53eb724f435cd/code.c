#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        int num=(i%2 == 1)? 1: 0;
        for(int j=1;j<=i;j++){

            printf("%d ",num);
            num=1-num;
        }
        printf("\n");
    }
}