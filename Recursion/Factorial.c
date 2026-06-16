#include <stdio.h>
int factorial(int n){
    if (n == 1 || n == 0) return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int fac = factorial(n);
    printf("The factorial is : %d", fac);
    return 0;
}