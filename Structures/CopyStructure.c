#include<stdio.h>
#include<string.h>
int main(){
    struct student {
        char name[16] ;
        int class;
    }a,b;
    strcpy(a.name,"Bhavya");
    a.class = 12;
    b=a;
    printf("%d",b.class);
    return 0;
}