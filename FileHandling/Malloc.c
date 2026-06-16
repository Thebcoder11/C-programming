#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int* ptr = (int *) malloc(n*(sizeof(int)));
    int* p = ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&*p);
        p++;
    }
    for(int i=1;i<=n;i++){
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}