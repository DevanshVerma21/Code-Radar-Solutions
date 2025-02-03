#include <stdio.h>

int main() {
    int num;
    int lsb=1;
    scanf("%d",&num);
    int result = lsb & num;
    if (result==0){
        printf("Not Set");
    } 
    else{
        printf("Set");
    }
    return 0;
}