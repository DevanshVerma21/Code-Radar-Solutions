#include <stdio.h>

int main(){
    double num;
    scanf("%ld",&num);
    int msb = (num >> 7) & 1;
    if (msb == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}



