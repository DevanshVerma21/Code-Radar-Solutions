#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int msb = (num >> 9) & 1;
    if (msb == 0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
}



