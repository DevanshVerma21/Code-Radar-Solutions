#include <stdio.h>

int oddoreven(){
    int number;
    scanf("%d",&number);
    if (number % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    oddoreven();
}