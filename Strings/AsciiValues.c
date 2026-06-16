#include<stdio.h>
int main(){
    char ch = 'A'; // 65 
    int x = (int)ch;
    printf("%c -> %d\n",ch,x);
    char y = 'Z'; // 90
    printf("%c -> %d\n",y,y);
    char a = '0'; // 48
    printf("%c -> %d\n",a,a);
    char b = '9'; // 57
    printf("%c -> %d\n",b,b);
    char c = '\0'; // 0 null character
    printf("%c -> %d\n",c,c);
    return 0;
}
// a-97
// z-122