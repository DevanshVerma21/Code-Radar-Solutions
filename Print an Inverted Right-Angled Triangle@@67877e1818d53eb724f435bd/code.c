#include <stdio.h>

int main(){
    int rows;
    scanf("%d",&rows);
    for (int i = ;i<=rows;i++){
        for (int j =1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}