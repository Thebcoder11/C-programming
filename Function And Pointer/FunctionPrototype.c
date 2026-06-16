#include<stdio.h>
int main(){
    void india();
    india();
    return 0;
}
void india(){
    printf("You are in India\n");
    void australia();
    australia();
    return;
}
void australia(){
    printf("You are in Australia\n");
    void england();
    england();
    return;
}
void england(){
    printf("You are in England\n");
    return;
}
// function prototype helps you to put code in anywhere you want to put in
// above or below whereever
// when we want to call a function it must be on top of that 
// but with the help of function prototyping it can be anywhere 