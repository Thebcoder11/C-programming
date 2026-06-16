#include<stdio.h>
int main(){
    char ch[] ={'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    ch[5] = 'o';
    int i=0;
    while(ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}
// strings are the array of characters