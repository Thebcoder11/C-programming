#include<stdio.h>
#include<string.h>
int main(){
    // deep copy
    char * s1 = "Hello World"; // 
    char * s2 = s1;
    s2 = "Hello Everyone"; // deep copy changing s2 wont change s1
    printf("%s\n",s1);
    printf("%s\n",s2);
}