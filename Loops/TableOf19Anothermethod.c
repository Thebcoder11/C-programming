#include<stdio.h>
int main(){
    int a = 19;
    for(int i=1;i<=10;i++){
        int d = a * i;
        printf("%d * %d = %d\n",a,i,d);
    }
    return 0;
}