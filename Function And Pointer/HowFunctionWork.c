#include<stdio.h>
void england(){
    printf("You are in England\n");
    return;
}
void australia(){
    printf("You are in Australia\n");
    england();
    return;
}
void india(){
    printf("You are in India\n");
    australia();
    return;
}
int main(){
    india();
    return 0;
}
// if you are calling one function it must be always above from it
// if it not above that compiler will give error
// so if you calling one function it must be on the top of that
// in a code main function is always one
// in programming do not repeat yourself
// we can have unlimited functions in a program
// all function must have different name