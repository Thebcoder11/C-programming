#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    float weight;
} person;
void access(person *m, person*n){
    printf("AGE : %d\n",m->age);
    printf("Weight :%f\n",m->weight);
    printf("Age of 2nd person : %d\n",n->age);
    printf("WEight of 2nd person : %f\n",n->weight);
    return;
}
int main(){
    person a,b;
    a.age = 30;
    a.weight = 60;
    b.age = 45;
    b.weight = 76;
    person *x = &a;
    person *y = &b;
    void access();
    access(x,y);
    return 0;
}