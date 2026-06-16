#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *ptr = (int *) malloc(n*(sizeof(int)));
    printf("%p\n",ptr);
    ptr = realloc(ptr,20*sizeof(int));
    printf("%p\n",ptr); // memory location got changed 
    return 0;
}
// realloc size is big it might be possible there is present something after that
// that is why new memory is assigned