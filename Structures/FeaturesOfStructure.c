// structure oass in function
#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[15];
    int health;
    int attack;
    int speed;
    char tier;
} pokemon;
void fun(pokemon p){
    printf("Attack : %d\n",p.attack);
}
void change(pokemon p){
    p.attack = 200;
}
int main(){
    pokemon pikachu;
    strcpy(pikachu.name,"Pikachu");
    pikachu.health = 60;
    pikachu.attack = 80;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    void fun();
    fun(pikachu);
    void change();
    change(pikachu);
    printf("Attack : %d\n",pikachu.attack);
    return 0;
}
// pass by value