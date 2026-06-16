#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[15];
    int attack ;
    int speed;
    char tier;
} pokemon;
void fun(pokemon p){
    printf("%d",p.attack);
    return ;
}
int main(){
    pokemon pikachu;
    strcpy(pikachu.name,"Pikachu");
    pikachu.attack = 80;
    pikachu.speed = 90;
    pikachu.tier = 'A';
    void fun();
    fun(pikachu);
    return 0;
}