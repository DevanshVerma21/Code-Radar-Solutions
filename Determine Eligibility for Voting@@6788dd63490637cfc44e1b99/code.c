#include <stdio.h>

int agecheck(){
    if (age<=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }

}
int main(){
    int age;
    scanf("%d",&age);

    printf("%s",agecheck(int age));
}