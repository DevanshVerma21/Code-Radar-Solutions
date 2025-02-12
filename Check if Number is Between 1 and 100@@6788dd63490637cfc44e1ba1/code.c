#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if (number<= 100 && number>=1){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
}