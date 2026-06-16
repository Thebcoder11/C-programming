#include<stdio.h>
#include<string.h>
typedef struct book{
    char name[25];
    char author[15];
    int pages ;
} Book;
void display(Book *b);
int main(){
    Book b1 = {"The dairy of a young girl","Anne Frank",200 };
    display(&b1);
    return 0;
}
void display(Book *b){
    printf("%s %s %d\n",b->name,b->author,b->pages);
}