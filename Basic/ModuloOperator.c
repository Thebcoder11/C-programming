#include<stdio.h>
int main(){
    int a = 2;
    int b = 8;
    int r = a%b;
    int q = a/b; // this will give remainder 0 as 2 is not divisible by 8
    printf("%d",r);
    return 0;
}
// when a is divided by b if a is smaller then b output will be a
// 2%8 = a<b => then output will be a