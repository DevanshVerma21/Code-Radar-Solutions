#include <stdio.h>

int main(){
    int rows;
    int num = 1;
    scanf("%d",&rows);
    for(int i = 1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num % 2);
            num++;
        }
        printf("\n");
    }
}