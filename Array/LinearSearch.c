#include<stdio.h>
#include<stdbool.h>
int main(){
    int size, idx =-1;
    bool flag = false;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the element at %d index : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int x;
    printf("Enter the value you want to search in the array : ");
    scanf("%d",&x);
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            idx = i;
            flag = true;
        }
    }
    if(flag == true){
        printf("Element is found in the array at index : %d",idx);
    }
    else{
        printf("Element not found in the array ");
    }
    return 0;
}