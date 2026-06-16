#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int combination(int n,int r){
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int ncr = combination(n,r);
    printf("The Combination of n and r is : %d",ncr);
    return 0;
}