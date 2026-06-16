#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[15];
        int age;
        int number_of_matches;
        float average_runs;
    } cricketer ;
    int n;
    printf("Enter the number of cricketers : ");
    scanf("%d",&n);
    cricketer arr[n];
    for(int i=0;i<n;i++){
        printf("Name of the cricketer : ");
        scanf("%s",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("Enter the name of the cricketer : ");
        scanf("%s",arr[i].name);
        printf("Enter the age of the cricketer : ");
        scanf("%d",&arr[i].age);
        printf("Enter the number of matches : ");
        scanf("%d",&arr[i].number_of_matches);
        printf("Enter the average run : ");
        scanf("%f",&arr[i].average_runs);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("Name of the cricketer : %s\n",arr[i].name);
        printf("Age of the cricketer :%d\n",arr[i].age);
        printf("Number of matches : %d\n",arr[i].number_of_matches);
        printf("Average run : %f\n\n",arr[i].average_runs);
    }

    return 0;
}