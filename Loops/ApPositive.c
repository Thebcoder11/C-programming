#include<stdio.h>
int main(){
    // 100,97,94 upto positive numbers
    // 100 + (n-1)-3 => 100-3n+3 => 103-3n > 0 => 103/3 = 34
    int a = 100;
    for(int i=1;i<=34;i++){
        printf("%d ",a);
        a = a-3;
    }
}