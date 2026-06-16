#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n>5 && n<10){
        printf("number is in between 5 and 10");
    }
    else{
        printf("number is not in between 5 and 10");
    }
    return 0;
}