#include<stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you ?\n");
    return; // code ya function ko khatam kar do
}
// code always start from main function 
int main(){
    greet();
    greet();
    greet();
    return 0;
}
// we can use loop here also but if we want this after a certain period of time 
// that is why there is a need of function to use it anywhere 