#include<stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char d = (char)i;
        printf("%c -> ",d);
        printf("%d\n",i);
    }
    return 0;
}