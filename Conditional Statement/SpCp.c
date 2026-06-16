#include<stdio.h>
int main(){
    float sp,cp;
    printf("Enter the value of cost price : ");
    scanf("%f",&cp);
    printf("Enter the value of selling price : ");
    scanf("%f",&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No loss");
    }
    return 0;
}