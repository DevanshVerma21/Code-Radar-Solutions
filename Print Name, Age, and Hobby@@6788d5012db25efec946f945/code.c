#include <stdio.h>

int main() {
    char name[100];
    scanf("%s",name);
    int age;
    scanf("%d",age);
    char hobby[100];
    scanf("%s",hobby);

    printf("%s",name);
    printf("%d",age);
    printf("%s",hobby);
    return 0;
}