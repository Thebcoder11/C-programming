#include<stdio.h>
#include<string.h>
typedef union pokemom{
    char name[15];
    int attack;
    int speed;
    int health ;
    char tier;
} pokemon;
int main(){
    pokemon pikachu;
    strcpy (pikachu.name,"Pikachu");
    pikachu.attack = 80;
    pikachu.speed = 90;
    pikachu.health = 100;
    pikachu.tier = 'A';
    printf("Name : %s\n",pikachu.name);
    printf("Attack : %d\n",pikachu.attack);
    printf("Speed : %d\n",pikachu.speed);
    printf("Health : %d\n",pikachu.health);
    printf("Tier : %c\n",pikachu.tier);
    return 0;
}
// only one memory is used at time
// last one is a 
// so complete array values are 65 
// A ascii value is 65