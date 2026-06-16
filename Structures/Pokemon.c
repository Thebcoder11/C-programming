#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int attack;
        int speed ;
        char name[15];
        char tier ;
    };
    struct pokemon pikachu;
    pikachu.attack = 80;
    pikachu.speed = 100;
    strcpy(pikachu.name,"Pikachu");
    pikachu.tier = 'A';
    struct pokemon charizard;
    charizard.attack = 100;
    charizard.speed = 180;
    strcpy(charizard.name,"Charizard");
    charizard.tier = 'S';
    printf("The name of the pokemon : %s\n",pikachu.name);
    printf("Attack : %d\n",pikachu.attack);
    printf("Speed %d\n",pikachu.speed);
    printf("Tier of the Pokemon : %c\n",pikachu.tier);
    printf("\n");
    printf("The name of the pokemon : %s\n",charizard.name);
    printf("Attack : %d\n",charizard.attack);
    printf("Speed : %d\n",charizard.speed);
    printf("Tier : %d\n",charizard.tier);

    return 0;
}