#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    // String length
    char ch[] ="Bhavya";
    bool flag ;
    int x = strlen(ch);
    printf("The length of the string is : %d\n",x);

    // string copy
    char c2[] ="Rahul";
    int i=0;
    int count =0;
    while(c2[i]!='\0'){
        count++;
        i++;
    }
    char c1[count];
    strcpy(c1,c2);
    printf("%s\n",c1);

    // concatenate 
    char s1[15] = "Bhavya";
    char s2[] = "Yadav";
    strcat(s1,s2);
    printf("%s\n",s1);

    // compare 
    char e1[] = "Rahul" ;
    char e2[] = "Rahul" ; 
    printf("%d\n",strcmp(e1,e2));
   // if equal value is 0 
   // if not equal value is 1

   // copy substring
   char f1[12];;
   char f2 [] ="Hello Everyone";
   printf("%s",strncpy(f1,f2,5));
    return 0;
}