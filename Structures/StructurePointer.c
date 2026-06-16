#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[15];
    int attack;
    int speed;
    char tier;
    int health;
} pokemon;
void fun(pokemon *y){
    printf("%d",y->attack);
}
int main(){
    pokemon pikachu;
    strcpy(pikachu.name,"Pikachu");
    pikachu.attack = 60;
    pikachu.speed = 80;
    pikachu.tier = 'A';
    pikachu.health = 100;
    pokemon *x = &pikachu;
    void fun();
    fun(x);
    return 0;
}