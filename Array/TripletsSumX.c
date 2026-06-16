#include<stdio.h>
#include<stdbool.h>
int main(){
    int size,count=0;
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
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    count++;
                    flag = true;
                }
            }
        }
    }
    if(flag==true){
        printf("The total number of tripletes are : %d",count);
    }
    else{
        printf("No triplet is found whose sum is equal to x ");
    }
    return 0;
}