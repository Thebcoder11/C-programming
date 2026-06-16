#include<stdio.h>
int main(){
    int n,flag = 0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    if(n==1){
        printf("Neither Prime Nor Composite");
    }
    else if(flag == 0){
        printf("Prime Number");
    }
    else{
        printf("Composite Number");
    }
    return 0;
}