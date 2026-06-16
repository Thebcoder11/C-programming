#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int a = 1;
    for(int q=1;q<=2*n-1;q++){
        char ch =(char)a+64;
        printf("%c",ch);
        if(q<n) a++;
        else a--;
    }
    printf("\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            char ch=(char)(j+64);
            printf("%c",ch);
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
        }
        int b = n-i;
        for(int l=1;l<=n-i;l++){
            char ch=(char)(b+64);
            printf("%c",ch);
            b--;
        }
        printf("\n");
    }
    return 0;
}