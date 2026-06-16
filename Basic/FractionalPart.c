#include<stdio.h>
int main(){
    float x;
    printf("Enter the decimal value : ");
    scanf("%f",&x);
    int y = x;
    printf("%d\n",y);
    float z = x-y;
    printf("Your Fractional part is :%f",z);
    return 0;
}