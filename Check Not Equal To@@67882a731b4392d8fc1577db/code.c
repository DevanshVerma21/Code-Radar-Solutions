#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("False");
    }
    else if (a!=b){
        printf("True");
    }
    return 0;
}