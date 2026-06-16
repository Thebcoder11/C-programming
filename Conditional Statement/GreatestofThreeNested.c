#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){ // b<c<a
            printf("%d is the greatest ",a);
        }
        else{ // b<a<c
            printf("%d is the greatest ",c);
        }
    }
    else{ // b>a
        if(b>c){ // a<c<b
            printf("%d is the greatest ",b);
        }
        else{ // a<b<c
            printf("%d is the greatest ",c);
        }
    }
    return 0;
}