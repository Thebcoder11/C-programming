#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int permutation(int n,int r){
    int perm = factorial(n)/factorial(n-r);
    return perm;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r ;
    printf("Enter r : ");
    scanf("%d",&r);
    int npr = permutation(n,r);
    printf("The permutation of n and r is : %d",npr);
    return 0;
}