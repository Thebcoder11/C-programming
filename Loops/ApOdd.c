#include<stdio.h>
int main(){
    // 1,3,5, upto n terms 
    // 1+(n-1)2 = 1+2n-2 = 2n-1
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }


}