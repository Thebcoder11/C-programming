#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    printf("Enter third number : ");
    scanf("%d",&c);
    if(a<b){
        if(a<c){ // a<b<c
            printf("%d is the smallest",a);
        }
        else{//c<a<b
            printf("%d is the smallest ",c);
        }
    }
    else{ // b<a
        if(b<c){//b<a<c
            printf("%d is the smallest ",b);
        }
        else{ // c<b<a
            printf("%d is the smallest ",c);
        }
    }
    return 0;
}