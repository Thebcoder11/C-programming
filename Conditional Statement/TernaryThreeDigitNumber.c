#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    n>99 && n<1000 ? printf("It is a Three Digit number") : printf("It is not a three digit number");
    return 0;
}