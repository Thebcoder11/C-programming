#include<stdio.h>
#include<string.h>
typedef float realnumber;
typedef int* pointer;
int main(){
    int x = 5, y = 7;
    int *a =&x ;// problem cant initialize two pointers , b =&y;
    int *b =&y;
    printf("%p\n",a);
    printf("%p\n",b);
    realnumber z = 9.8;
    printf("%f\n",z);
    pointer l=&x,m=&y;
    printf("%p\n",l);
    printf("%p\n",m);

}