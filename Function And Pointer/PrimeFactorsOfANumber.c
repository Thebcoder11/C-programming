#include<stdio.h>
void PrimeFactor(int x){
    int count = 0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d ",x);
    }
}
void Factors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            PrimeFactor(i);
        }
    }
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    Factors(n);
    return 0;
}