#include<stdio.h>
int main(){
    int a;
    printf("Enter the first operands  : ");
    scanf("%d",&a);
    char ch;
    printf("Enter the operator : ");
    scanf(" %c",&ch);
    int b;
    printf("Enter the second operands : ");
    scanf("%d",&b);
    switch(ch){
        case '+':
            printf("Sum : %d",a+b);
            break;
        case '-':
            printf("Difference : %d",a-b);
            break;
        case '*':
            printf("Multiplication : %d",a*b);
            break;
        case '/':
            printf("Division : %d",a/b);
            break;
        default:
            printf("invalid operator");

    }
    return 0;
}