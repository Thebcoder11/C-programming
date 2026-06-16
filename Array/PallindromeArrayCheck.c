#include<stdio.h>
#include<stdbool.h>
void Pallindrome(int arr[],int si, int ei){
    bool flag = true;
    for(int i=si,j=ei;i<j;i++,j--){
       if(arr[i]!=arr[j]){
        flag = false;
       }
    }
    if(flag == true) printf("Yes it is a Pallindrome Number");
    else printf("Not a pallindrome number ");
    return;
}
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
    }
    printf("\n");
    Pallindrome(arr,0,size-1);
    return 0;
}