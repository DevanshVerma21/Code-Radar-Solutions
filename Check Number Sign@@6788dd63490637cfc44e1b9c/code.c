#include <stdio.h>

int main(int number){
    scanf("%d",&number);
    if (number < 0){
        printf("Negative");
    }
    else if (number > 0){
        printf("Positive");
    }
    else{
        printf("Zero");
    }

}