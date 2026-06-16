#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int a=1;
    for(int q=1;q<=2*n-1;q++){
        printf("%d",a);
        if(q<n) a++;
        else a--;
    }
    printf("\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
        }
        int b = n-i;
        for(int l=1;l<=n-i;l++){
            printf("%d",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}