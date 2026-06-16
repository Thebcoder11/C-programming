#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[16];
    int attack;
    int health;
    int speed;
    char tier;
}pokemon;
int main(){
    pokemon pikachu ={"Pikachu",70,60,80,'A'};
    printf("Attack : %d",pikachu.attack);
    return 0;
}