#include<stdio.h>
int main(){
    int sub[50],i;
    for( i=0;i<=48;i++); // for loop ended here only
    // when i value became 49 this loop will complete
    {
        sub[i]=i;
        printf("\n%d",sub[i]);
    }
    return 0;
}
//sub[49] = 49
// output
//
// 49