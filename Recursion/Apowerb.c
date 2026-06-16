#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a * power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter Base : ");
    scanf("%d",&a);
    printf("Enter Exoponent : ");
    scanf("%d",&b);
    int p =power(a,b);
    printf("%d is raised to power %d is : %d",a,b,p);
    return 0;
}