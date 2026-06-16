#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[15];
        int class ;
        char section ;
        float marks ;
    } student;
    student Bhavya,Varista;
    student arr[2] = {Bhavya,Varista};
    printf("\n");
    for(int i=0;i<1;i++){
        printf("Enter the name of the student : ");
        scanf("%s",arr[i].name);
        printf("Enter the class : ");
        scanf("%d",&arr[i].class);
        printf("Enter the section : ");
        scanf(" %c",&arr[i].section);
        printf("Enter the marks of the student : ");
        scanf("%f",&arr[i].marks);
    }
    arr[1]=arr[0];
    printf("\n");
    for(int i=0;i<2;i++){
        printf("Name of the student : %s\n",arr[i].name);
        printf("Class : %d\n",arr[i].class);
        printf("Section : %c\n",arr[i].section);
        printf("Marks : %f\n",arr[i].marks);
    }
    return 0;
}