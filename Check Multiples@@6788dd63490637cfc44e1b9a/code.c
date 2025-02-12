#include <stdio.h>

int multiplecheck(){
    int number,multiple;
    scanf("%d %d",&number,&multiple);
    if (number % multiple == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}

int main(){
    multiplecheck();
}