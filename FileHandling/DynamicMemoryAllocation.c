#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *ptr = (int *) malloc(n*sizeof(int));
    printf("%d\n",*ptr);
    int *p = (int *) calloc(n,sizeof(int));
    printf("%d",*p);
    return 0;
}
// malloc allocate garabage value
// while calloc allocate 0 to the array
// static memory the memory allocated during compile time
// dynamic memory the memory allocated during runtime