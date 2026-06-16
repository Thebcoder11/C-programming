#include<stdio.h>
int main(){
    int n,count = 0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count = count+1;
            if(count==3){
                break;
            }
        }

    }
    if(n==1){
        printf("Neither prime nor composite");
    }
    else if(count == 2){
        printf("Prime Number");
    }
    else{
        printf("Composite Number");
    }
    return 0;
}