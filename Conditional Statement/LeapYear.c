#include<stdio.h>
int main(){
    int n;
    printf("Enter the year : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("It is a leap Year");
    }
    else{
        printf("It is not a leap Year");
    }
    return 0;
}