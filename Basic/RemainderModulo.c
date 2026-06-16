#include<stdio.h>
int main(){
    int a,b,r;
    printf("Enter The value of divident : ");
    scanf("%d",&a);
    printf("Enter The value of divisor : ");
    scanf("%d",&b);
    r = a%b;
    printf("the remainder is when %d is divided by %d is %d",a,b,r);
    return 0;
}