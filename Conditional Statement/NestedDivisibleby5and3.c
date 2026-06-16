#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("Number is divisible by 5 and 3");
        }
        else{
            printf("Number is divisible by 5 but not by 3");
        }
    }
    else if(n%3==0){
        if(n%5==0){
            printf("Number is divisible by 5 and 3");
        }
        else{
            printf("Number is divisble by 3 not by 5");
        }
    }
    else{
        printf("Number is not divisible by 5 and 3");
    }
    return 0;
}