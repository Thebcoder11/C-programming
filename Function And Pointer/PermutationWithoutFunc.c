#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    int nfact = 1;
    int nrfact = 1;
    for(int i=1;i<=n;i++){
        nfact = nfact * i;
    }
    for(int i=1;i<=n-r;i++){
        nrfact = nrfact * i;
    }
    int npr = nfact / nrfact;
    printf("The permuatation of n and r is : %d",npr);
    return 0;
}