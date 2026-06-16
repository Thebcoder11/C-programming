#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    while(n>0){
        rev = rev * 10;
        rev = rev + n%10;
        n = n/10;
    }
    printf("The Reverse of the number is :%d",rev);
    return 0;
}