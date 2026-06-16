#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First number : ");
    scanf("%d",&a);
    printf("Enter Second number : ");
    scanf("%d",&b);
    printf("Enter Third number : ");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("%d is the smallest",a);
    }
    else if(b<a && b<c){
        printf("%d is the smallest",b);
    }
    else{
        printf("%d is the smallest",c);
    }
    return 0;
}