#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int attack;
        int speed;
        char tier;
    } pokemon;
    pokemon pikachu;
    strcpy(pikachu.name,"Pikachu");
    pikachu.attack = 60;
    pikachu.speed = 80;
    pikachu.tier = 'A';
    typedef struct legendarypokemon{
        int specialdefense;
        pokemon normal;
    } legend;
    legend mewtwo;
    mewtwo.specialdefense = 180;
    mewtwo.normal.attack = 120;
    mewtwo.normal.speed = 120;
    strcpy(mewtwo.normal.name,"Mewtwo");
    mewtwo.normal.tier = 'S';
    struct godpokemon {
        int lifeline ;
        legend le ;
    } bulbasaur;
    bulbasaur.lifeline =300 ;
    bulbasaur.le.specialdefense = 280;
    bulbasaur.le.normal.speed = 80;
    printf("%d",bulbasaur.le.normal.speed);
    return 0;
}