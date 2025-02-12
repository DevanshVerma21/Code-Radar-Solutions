#include <stdio.h>

int main(){
    char action;
    scanf("%c",&action);
    if (action=='R'){
        printf("Stop");
    }
    else if(action=='G'){
        printf("Go");
    }
    else if(action=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}