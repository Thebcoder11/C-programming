#include<stdio.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        int number_of_pages;
        float price;
    }Book;
    Book a,b,c;

    strcpy(a.name,"The Dairy of the Young Girl ");
    a.number_of_pages = 200;
    a.price = 100.08;

    strcpy(b.name,"Atomic Habits ");
    b.number_of_pages = 100;
    b.price = 200.09;

    printf("Name of the book : %s\n",a.name);
    printf("Total number of pages : %d\n",a.number_of_pages);
    printf("The price of the book : %f\n",a.price);
    printf("\n");
    printf("The name of the book : %s\n",b.name);
    printf("Total number of pages : %d\n",b.number_of_pages);
    printf("The price of the book : %d\n",b.price);
}