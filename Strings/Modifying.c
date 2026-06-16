#include<stdio.h>
#include<string.h>
int main(){
    char ch[] = "Bhavya Yadav";
    ch[1] = 97;
    printf("%s\n",ch);
    ch[1] ='h';
    puts(ch);
}
// no error as such 