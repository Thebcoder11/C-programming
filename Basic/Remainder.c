#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter the value of Divident : ");
    scanf("%d",&a);
    printf("Enter the value of Divisor : ");
    scanf("%d",&b);
    q = a/b;
    r = a-(b*q);
    printf("The remainder when %d is divided by %d is %d ",a,b,r);
    return 0;
}
// divident = divisor * quotient + remainder
// quotient = divident / divisor 
// remainder = divident - (divisor * quotient)
// r = a -(b*q)