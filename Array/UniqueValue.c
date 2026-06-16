#include<stdio.h>
#include<stdbool.h>
int main(){
    int size,idx;
    bool flag;
    int unique;
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
        flag = false;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag == false){
            unique = arr[i];
            idx = i;
            break;
        }
    }
    if(flag == false){
        printf("The unique value is : %d",unique);
        printf("\nThe index of unique value is : %d",idx);
    }
    else{
        printf("No unique value in the array ");
    }
    return 0;
}