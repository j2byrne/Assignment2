#include <stdlib.h>
#include "operations.h"

void humanStart(struct players player[], int currentPlayer)
{
	do {
		player[currentPlayer].magicSkills=1+rand()%100;
		player[currentPlayer].smartness = 1+rand()%100;
		player[currentPlayer].strength = 1+rand()%100;
		player[currentPlayer].luck= 1+rand()%100;
		player[currentPlayer].dexterity= 1+rand()%100;
	} while((player[currentPlayer].magicSkills + player[currentPlayer].smartness + player[currentPlayer].strength + player[currentPlayer].luck + player[currentPlayer].dexterity) >= 300);
}
