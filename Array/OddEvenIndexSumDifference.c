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
    int Evensum = 0;
    int Oddsum = 0;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        if(i%2==0){
            Evensum = Evensum + arr[i];
        }
        else{
            Oddsum = Oddsum + arr[i];
        }
    }
    int diff = Evensum - Oddsum;
    printf("\nThe difference of Even indexes and odd indexes is : %d",diff);
    return 0;
}