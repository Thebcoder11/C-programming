#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("integer array address\n");
    for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }
    printf("string array address\n");
    char ch[]={'b','h','a','v','y','a'};
    for(int i=0;i<5;i++){
        printf("%p\n",&ch[i]);
    }
}
// array of integer is of 4byte value adjacant to it are separted by 4
// array of strings is of 1byte and values are separted by 1
// integer is much more greater than array 
// total elements in integers are 2power32
// integer range from 2power -31 to 2power 31 minus 1 
// string total element 256