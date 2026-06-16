#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=1;i<=x;i++){
        fact = fact * i;
    }
    return fact;
}
int permutation(int n,int r){
    int perm = factorial(n)/factorial(n-r);
    return perm;
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
            int perm = permutation(i,j);
            printf("%d ",perm);
        }
        printf("\n");
    }
    return 0;
}
// permutation = factorial(n)/factorial(n-r);
// npr = n!/(n-r)!
// npr+1 = n!/(n-r-1)!
// (n-r)!=(n-r)*(n-r-1)!
// (n-r)!/(n-r) = (n-r-1)!
// npr+1= n!(n-r)/(n-r)!
// npr+1 = npr(n-r)