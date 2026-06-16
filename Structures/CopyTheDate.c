#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    bool flag = true;
    struct date{
        int date;
        int month;
        int year;
    }d1,d2,d3;
    struct date arr[3]={d1,d2,d3};
    for(int i=0;i<2;i++){
        printf("Enter the date : ");
        scanf("%d",&arr[i].date);
        printf("Enter month : ");
        scanf("%d",&arr[i].month);
        printf("Enter year : ");
        scanf("%d",&arr[i].year);
    }
    printf("\n");
    arr[2]=arr[0];
    for(int i=0;i<3;i++){
        printf("Date : %d\n",arr[i].date);
        printf("Month :%d\n",arr[i].month);
        printf("Year :%d\n\n",arr[i].year);
    }
    if(arr[0].date != arr[2].date) flag = false;
    if(arr[0].month != arr[2].month) flag = false;
    if(arr[0].year != arr[2].year) flag = false;
    if(flag == false){
        printf("Dates are not same ");
    }
    else{
        printf("Date copied successfully");
    }
    return 0;
}
// now you cannot compare direclty with variable name beacuse you have created the array right now
