#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("True");
    }
    elif(a<b){
        printf("False");
    }
    else {
        printf("Equal")
    }
    return 0;
}