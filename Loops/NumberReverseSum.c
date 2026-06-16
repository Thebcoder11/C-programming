#include<stdio.h>
int main(){
    int n,sum=0,rev=0;
    printf("Enter number : ");
    scanf("%d",&n);
    int a = n;
    while(a>0){
        rev = rev * 10;
        rev = rev + a%10;
        a = a/10;
    }
    sum = n+rev;
    printf("The sum of given number and reverse is :%d",sum);
    return 0;
}