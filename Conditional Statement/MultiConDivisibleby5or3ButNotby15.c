#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if((n%5==0 || n%3==0 ) && n%15!=0){
        printf("number is divisible by 5 or 3 but not by 15");
    }
    else{
        printf("number is neither divisible by 5 or 3 and not by 15");
    }
    return 0;
}