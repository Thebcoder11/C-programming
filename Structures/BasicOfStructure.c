#include<stdio.h>
#include<string.h>
int main(){
    struct Employee{
        int emp_id;
        char name[15];
        float salary;
    } ;
    struct Employee e1;
    e1.emp_id = 1;
    strcpy(e1.name,"Bhavya");
    e1.salary = 4500000;
    struct Employee e2;
    e2.emp_id = 2;
    strcpy(e2.name,"Khushi");
    e2.salary = 500000;
    
    printf("Employee id : %d\n",e1.emp_id);
    printf("Employee name :%s\n",e1.name);
    printf("Employee salary : %f\n",e1.salary);

    printf("Employee id : %d\n",e2.emp_id);
    printf("Employee name : %s\n",e2.name);
    printf("Employee salary : %f\n",e2.salary);

    return 0;
}
// work around make 3 different array 1st for empis 2nd for name 3rd for salary
// structure are use to store the different types of attribute of a particular class
// Employee is the data type name