#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            printf("Number is divisible by 5 or 3 or 15");
        }
        else{
            printf("Number is Divisible by 15");
        }
    }
    else{
        printf("Number is not divisble by 5 or 3 but not by 15");
    }
    return 0;
}