#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int q=1;q<=2*n-1;q++){
        char ch =(char)(q+64);
        printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<n;i++){
        int a = 1;
        for(int j=1;j<=n-i;j++){
            char ch =(char)(a+64);
            printf("%c",ch);
            a++;
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
            a++;
        }
        for(int l=1;l<=n-i;l++){
            char ch = (char)(a+64);
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}