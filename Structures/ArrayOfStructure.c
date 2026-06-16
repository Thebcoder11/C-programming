#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int attack;
        int speed;
        char tier;
    } pokemon;
    pokemon pikachu,charizard,mewtwo;
    pokemon arr[3] = {pikachu,charizard,mewtwo};
    for(int i=0;i<3;i++){
        printf("Enter the name of pokemon : ");
        scanf("%s",arr[i].name);
        printf("Enter the attack of the pokemon : ");
        scanf("%d",&arr[i].attack);
        printf("Enter the speed of the pokemon : ");
        scanf("%d",&arr[i].speed);
        printf("Enter the tier of the pokemon : ");
        scanf(" %c",&arr[i].tier);
    }
    for(int i=0;i<3;i++){
        printf("Name : %s\n",arr[i].name);
        printf("Attack : %d\n",arr[i].attack);
        printf("Speed : %d\n",arr[i].speed);
        printf("Tier : %c\n\n",arr[i].tier);
    }
}