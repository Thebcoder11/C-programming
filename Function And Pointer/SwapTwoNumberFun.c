#include<stdio.h>
// these a and b are different boxes 
// these are not same as the main function a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("The value of a is : %d\n",a);
    printf("The value of b is : %d",b);
    return;
}
int main(){
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);
    swap(a,b); // this is called pass by value
    // these are called formal parameters
    // the value inside a and b are actual parameters
    return 0;
}