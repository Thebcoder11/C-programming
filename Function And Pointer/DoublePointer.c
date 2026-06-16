#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a; // x is a pointer which store address of a
    printf("%p\n",&a);// address of a
    printf("%p\n",x); // pointer which store address of
    int** y = &x; // pointer which store another pointer addresss
    printf("%p\n",&x); // address of x
    printf("%p\n",y); // address of x
    **y = 7; //go to address which y stores x itself store adress now go it which is a = 7
    printf("%d\n",a); 
    printf("%p\n",*y); // address of x
    return 0;
}