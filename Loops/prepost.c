#include<stdio.h>
int main(){
    int x = 5;
    printf("%d\n",x);
    x++; // as here there is no other variable so it will give same output
    printf("%d\n",x);
    int y = 1;
    int z = ++y; // 2 will come in z
    int w = y++ ;// 2 will come and y value will be changed to 3
    printf("z = %d\n",z); 
    printf("w = %d\n",w);
    printf("y = %d\n",y); // y value is 3
    return 0;
}
// ++x first increment then value assign
// x++ first value assign then increment