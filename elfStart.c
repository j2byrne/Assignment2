#include <stdlib.h>
#include "operations.h"

void wizardStart(struct players player[], int currentPlayer)
{
	player[currentPlayer].luck = 60 + rand()%41;
	player[currentPlayer].smartness = 70 + rand()%31;
	player[currentPlayer].strength = 1 + rand()%50;
	player[currentPlayer].magicSkills = 51 + rand()%29;
	player[currentPlayer].dexterity = 1 + rand()%100;
}


	
	
	
	
	
	
	
