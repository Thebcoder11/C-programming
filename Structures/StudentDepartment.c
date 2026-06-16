#include<stdio.h>
#include<string.h>
void department(char *x,char *y){
    if(strcmp(x,y)==0) printf("Same department ");
    else printf("Different department");
    return;

}
int main(){
    typedef struct student{
        int roll_no;
        char name[15];
        char department[15];
        char Course[15];
        int startingyear;
    } student;
    student Bhavya,Varista;
    student arr[2] ={Bhavya,Varista};
    for(int i=0;i<2;i++){
        printf("Enter the roll number : ");
        scanf("%d",&arr[i].roll_no);
        printf("Enter the name : ");
        scanf("%s",arr[i].name);
        printf("Enter the department : ");
        scanf("%s",arr[i].department);
        printf("Enter the course : ");
        scanf("%s",arr[i].Course);
        printf("Enter the year of joining : ");
        scanf("%d",&arr[i].startingyear);
    }
    printf("\n");
    for(int i=0;i<2;i++){
        printf("Roll number : %d\n",arr[i].roll_no);
        printf("Name : %s\n",arr[i].name);
        printf("Course : %s\n",arr[i].Course);
        printf("Department :%s",arr[i].department);
        printf("Starting Year : %d\n\n",arr[i].startingyear);
    }
    char *a = arr[0].department; // it is already an array act like a pointer 
    char *b = arr[1].department; // when we pass an array , array is passed by reference
    department(a,b);
    return 0;
}
// pointer at first character arr[0].department
