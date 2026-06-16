#include<stdio.h>
int main(){
    for(int i=1;i<=500;i++){
        int a = i;
        int rev = 0;
        while(a>0){
            rev = rev * 10;
            rev = rev + a%10;
            a = a/10;
        }
        if(i==rev){
            printf("%d ",i);
        }
    }
    return 0;
}