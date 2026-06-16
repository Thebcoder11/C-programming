#include<stdio.h>
int main(){
    float principal,rate,time,si;
    principal = 100;
    rate = 30; 
    time = 3;
    si = (principal * rate * time )/ 100;
    printf("Your Simple Interest is : %f",si);
    return 0;
}