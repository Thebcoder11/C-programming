#include<stdio.h>
int main(){
    int x ;
    printf("Enter the Integer value : ");
    scanf("%d",&x);
    float y = x;
    y = y/2;
    printf("The half of the given integer is : %f",y);
    return 0;
}