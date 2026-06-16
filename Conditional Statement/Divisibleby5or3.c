#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("number is divisible by 5 or 3");
    }
    else{
        printf("number is not divisibly by 5 or 3");
    }
    return 0;
}