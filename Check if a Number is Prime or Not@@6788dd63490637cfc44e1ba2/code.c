#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if (number<=1){
        printf("Not Prime");
    }
    for(int i =2;i<=number;i++){
        if (number%i == 0){
            printf("Not Prime");
        }
    }
    return "Prime";
}