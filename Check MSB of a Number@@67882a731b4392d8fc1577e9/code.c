#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int msb = (num >> 9) & 1;
    if (msb == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}



