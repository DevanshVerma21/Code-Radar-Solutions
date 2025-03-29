#include <stdio.h>

int main(){
    int side;
    scanf("%d",&side);
    for(int i = 0;i<=side;i++){
        for(int j =0;j<=side;j++){
            printf("* ");
        }
        printf("\n");
    }
}
