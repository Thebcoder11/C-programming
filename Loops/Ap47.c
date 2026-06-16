#include<stdio.h>
int main(){
    // 4,7,10 upto n terms
    // 4 +(n-1)3 = 4 + 3n -3 = 3n + 1
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<3*n+1;i=i+3){
        printf("%d ",i);
    }
    
    return 0;
}