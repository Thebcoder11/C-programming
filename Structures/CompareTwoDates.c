#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    bool flag = true;
    struct date{
        int date;
        int month;
        int year;
    } d1,d2;
    struct date arr[2]={d1,d2};
    for(int i=0;i<2;i++){
        printf("Enter the date : ");
        scanf("%d",&arr[i].date);
        printf("Enter the month : ");
        scanf("%d",&arr[i].month);
        printf("Enter the year : ");
        scanf("%d",&arr[i].year);
    }
    if(arr[0].date != arr[1].date) flag = false;
    if(arr[0].month != arr[1].month) flag = false;
    if(arr[0].year != arr[1].year) flag = false;
    if(flag == false){
        printf("Dates are not same ");
    }
    else{
        printf("Dates are same ");
    }
    return 0;
}