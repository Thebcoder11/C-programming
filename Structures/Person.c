#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[15];
        int age;
        float salary;
    } Bhavya , Dileep;
    strcpy(Bhavya.name,"Bhavya");
    Bhavya.age = 19;
    Bhavya.salary = 5000000;
    strcpy(Dileep.name, "Dileep");
    Dileep.age = 20;
    Dileep.salary = 1000000;
    printf("Name of the person : %s\n",Bhavya.name);
    printf("Age of the second person : %d",Dileep.age);
    return 0;
}