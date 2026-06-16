#include<stdio.h>
#include<string.h>
int main(){
    char ch[] = "Hello World";
    char *ptr = ch; // pointing towars to first character of ch;
    printf("%s\n",ptr);
    *ptr = 'A';
    printf("%s\n",ptr);


    printf("%p\n",&ch[0]);
    printf("%p\n",ptr);

    char c[] = "Rahul";
    char * p1 = c;
    int i=0;
    while(*p1!='\0'){
        printf("%c",*p1);
        i++;
        p1++;
    }

    printf("\n");
    char *p = "Bhavya"; // read only cant be changed

    // with the help of pointers we can change the whole string 
    char * p2 = "Nishu" ; // cannot change single value 
    p2 = "Nisha";
    printf("%s\n",p2);

    // but when we are using array of string we can change only 1 word

    char s1[]= "Aaryash";
    char *p3 = s1;
    printf("%p\n",s1);
    printf("%p\n",p3);
    p3 = "Vivaan";
    printf("%p\n",p3); // just pointing in another string 
    return 0;
}