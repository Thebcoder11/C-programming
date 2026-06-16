#include<stdio.h>
int main(){
    // here a is a varible which take certain value in the memory 
    // memory is big so memory has given variable a some address 
    // so we can access it
    int a = 5;
    printf("%p\n",&a); // address of a
    int* x = &a; // x is a pointer which store address of another variable
    printf("%p",x);// here in x address of a is stored
    *x = 7 ; // x m jiska address uski value change kardo 7
    printf("\n%d",a);
    return 0;
}