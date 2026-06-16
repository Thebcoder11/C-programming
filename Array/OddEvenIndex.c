// odd index multiply by 2
// even index add 10
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        if(i%2!=0){
            arr[i] = arr[i] * 2;
        }
        else{
            arr[i] = arr[i] + 10;
        }
    }
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}