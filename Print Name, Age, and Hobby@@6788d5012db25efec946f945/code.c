#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);

    printf("%s",name);
    printf("%d",age);
    printf("%s",hobby);
    return 0;
}