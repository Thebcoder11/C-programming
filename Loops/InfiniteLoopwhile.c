#include<stdio.h>
int main(){
    int i = 1;
    while(i<10){
        printf("%d ",i);
        i--;
    }
    return 0;
}
// i value is always decreasing so it will never reach to 9
// therefore it is an infinite loop