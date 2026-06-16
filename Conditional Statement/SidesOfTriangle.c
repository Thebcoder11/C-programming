#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first side : ");
    scanf("%d",&a);
    printf("Enter the second side : ");
    scanf("%d",&b);
    printf("Enter the third side : ");
    scanf("%d",&c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("It is a valid triangle");
    }
    else{
        printf("It is invalid triangle");
    }
    return 0;
}
// sum of any two side must be greater than third side