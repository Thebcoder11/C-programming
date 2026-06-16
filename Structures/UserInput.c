#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        int roll_no;
        char name[15];
        char grade;
        int marks;
    } bhavya,Varista,Dileep,Yashika;
    printf("Enter the roll number : ");
    scanf("%d",&bhavya.roll_no);
    printf("Enter the name of the student : ");
    scanf("%s",bhavya.name);
    printf("Enter the grade of the student :  ");
    scanf(" %c",&bhavya.grade);
    printf("Enter the marks of the student : ");
    scanf("%d",&bhavya.marks);

    printf("Enter the roll number of 2nd student : ");
    scanf("%d",&Varista.roll_no);
    printf("Enter the name of the student : " );
    scanf("%s",Varista.name);
    printf("Enter the grade of the student : ");
    scanf(" %c",&Varista.grade);
    printf("Enter the marks of the student : ");
    scanf("%d",&Varista.marks);

    printf("\n");
    printf("Roll number of the student : %d\n",bhavya.roll_no);
    printf("Name of the student : %s\n",bhavya.name);
    printf("Grade of the student : %c\n",bhavya.grade);
    printf("Marks of the student : %d\n",bhavya.marks);
    printf("\n");
    printf("Roll number of the stduent : %d\n",Varista.roll_no);
    printf("Name of the student : %s\n",Varista.name);
    printf("Grade of the studnet : %c\n",Varista.grade);
    printf("Marks of the student : %d\n",Varista.marks);

    return 0;
}
// we use array for same data type attributes
// structure for different data type attributes
// structure are user defined data types
// Bhavya is the variable name and its datatype is student
// you dont need to pass the address of string for taking the input 
// when you have array of strings
// you cannot put escape sequnce in the scanf 
// give space before %c