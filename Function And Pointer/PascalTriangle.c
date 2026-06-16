#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r){
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=0;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int ncr = combination(i,j);
            printf("%d ",ncr);
        }
        printf("\n");
    }
}