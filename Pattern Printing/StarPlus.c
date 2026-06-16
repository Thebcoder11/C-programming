#include<stdio.h>
int main(){
    int n;
    printf("Enter odd number : ");
    scanf("%d",&n);
    int ml = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==ml || j==ml){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}