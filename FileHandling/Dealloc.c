#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int *ptr = (int *) calloc(n,sizeof(int));
    int *p = ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&*p);
        p++;
    }
    int *t = ptr;
    for(int i=1;i<=n;i++){
        printf("%d ",*t);
        t++;
    }
    
    free(ptr); // now memory does not belong to us
    ptr = NULL; // but now also our pointer pointing towards it 
    // that is why we assigned this NULL
   
    return 0;
}