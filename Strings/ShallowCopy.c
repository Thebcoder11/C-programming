#include<stdio.h>
int main(){
    char ch[] = "Bhavya";
    char *ptr = ch; // no need to pass with array sign it takes the starting address
    ch[0] ='A';
    printf("%s",ptr);
    return 0;
}