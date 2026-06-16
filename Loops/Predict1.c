#include<stdio.h>
int main(){
    int j; // j value is not defined it will take garbage value therefore output is not predicted
    while(j<=10){
        printf("\n%d",j);
        j=j+1;
    }
    return 0;
}
// output
// 
// 
