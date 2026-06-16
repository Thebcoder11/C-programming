#include<stdio.h>
int main(){
    int b,e,power =1;
    printf("Enter base : ");
    scanf("%d",&b);
    printf("Enter Exponent : ");
    scanf("%d",&e);
    for(int i=1;i<=e;i++){
        power = power * b;
        printf("%d is raised to %d is : %d\n",b,i,power);
    }
    return 0;
}