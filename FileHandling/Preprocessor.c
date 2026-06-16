// # is called the preprocessor
// #include is called the preprocessor directive
// .h stands for header file 
// stdio = standard input output
#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
    float f = cbrt (10);
    printf("The value of the cuberoot is :%f\n",f);
    double pie = 3.14159265359;
    printf("%.11f\n",pie);
    float s = sqrt(8);
    printf("The value of Sqaure root is %f\n",s);
    int a = __INT_MAX__;
    printf("The maximum value which can be stored in int : %d\n",a);
    int b = INT_MIN;
    printf("The minimum value which can be stored in int : %d\n",b );
    return 0;
}
// int = 4 bytes = 32 bits
// range 2power-16 to 2power 16 -1
// float = 4byte 
// char = 1byte 
// double = 8 bytes
