#include<stdio.h>
#include<string.h>
int main(){
    char ch[50];
    puts("Enter the first string");
    scanf("%[^\n]s",ch); // format specifier is used scanf take only one word
    puts("The input string is : ");
    puts(ch);
    char str[] = "hello world"; // actual size 11 + 1 = 12
    printf("%s\n",str); // here complete array is passed
    char c[10];
    puts("Enter the second String ");
    scanf("%s",c); // cant fetch value after the space
    puts(c);
    return 0;
}