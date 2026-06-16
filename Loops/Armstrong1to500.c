#include<stdio.h>
int main(){
    int ld;
    for(int i=1;i<=500;i++){
        int count=0;
        int arm=0;
        int a = i;
        int b = i;
        while(a>0){
            ld = a%10;
            count++;
            a = a/10;
        }
        for(int j=1;j<=count;j++){
            ld = b%10;
            arm = arm + (ld * ld * ld);
            b = b/10;
        }
        if(i==arm){
            printf("%d ",arm);
        }
    }
    return 0;
}