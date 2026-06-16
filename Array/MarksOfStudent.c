#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element at %d index :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(arr[i]<35){
            printf("The roll number of the student who is getting less than 35 is : %d",i+1);
        }
    }
}