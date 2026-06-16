#include<stdio.h>
int main(){
    // 1+2+3... upto n terms
    int n,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    printf("The sum of the given series is : %d",sum);
    return 0;
}