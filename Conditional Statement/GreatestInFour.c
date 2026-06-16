#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the First number : ");
    scanf("%d",&a);
    printf("Enter the Second number : ");
    scanf("%d",&b);
    printf("Enter the Third number : ");
    scanf("%d",&c);
    printf("Enter the Fourth number : ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest ",a);
    }
    else if(b<a && b<c && b<d){
        printf("%d is the greatest ",b);
    }
    else if(c<a && c<b && c<d){
        printf("%d is the greatest ",c);
    }
    else{
        printf("%d is the greatest ",d);
    }
    return 0;
}