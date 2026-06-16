#include<stdio.h>
int main(){
    float x = 5;
    float y = 2;
    printf("%f",5/2); // output 0 as both are int 5 and 2
    printf("\n%f",x/y); // now ouput will be 2.500000
    printf("\n%f",5.0/2); // now output will be 2.500000 as one value is float
    printf("\n%f",5/2.0); // 2.500000
    return 0;
}
// float can store integer value
// but integer datatype cannot store float value
// format specifier of float is %f
// float data type convert integer value also in float
