#include <stdio.h>

int main(){
    int side;
    scanf("%d",&side);
    for(int i = 1; i <= side ; i++){
        for(int j = 1; j <= side ;j++){
            if(i==1 || i == side - 1 || j==1 || j == side - 1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}