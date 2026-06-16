#include<stdio.h>
#include<stdbool.h>
int main(){
    int size;
    int duplicate;
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
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag = true;
                duplicate = arr[i];
                break;
            }
        }
    }
    if(flag == true){
        printf("%d is the duplicate value in the array ",duplicate);
    }
    else{
        printf("No dupicate value found in the array ");
    }
    return 0;
}