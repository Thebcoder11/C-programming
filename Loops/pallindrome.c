#include<stdio.h>
int main(){
    int n,rev=0,a;
    printf("Enter number : ");
    scanf("%d",&n);
    a=n;
    while(a>0){
        rev = rev*10;
        rev = rev + a%10;
        a=a/10;
    }
    if(n==rev){
        printf("Number is pallindrome");
    }
    else{
        printf("Number is not a pallindrome");
    }
    return 0;
}