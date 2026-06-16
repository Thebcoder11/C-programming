#include<stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    int b;
    printf("Enter b : ");
    scanf("%d",&b);
    swap(a,b);
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d",b);
    return 0;
}
// here we need to pass the variable by the method of pass by reference 
// if variable scope is only valid to the particular function is called local variable
// if variable can be accessed from anywhere is global variable