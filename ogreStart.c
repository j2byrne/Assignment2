#include <stdlib.h>
#include "operations.h"

void ogreStart(struct players player[], int currentPlayer)
{
	do{
		player[currentPlayer].smartness  = rand()%21;
		player[currentPlayer].luck = rand()%51;
	} while((player[currentPlayer].smartness + player[currentPlayer].luck) > 51);
		
	player[currentPlayer].magicSkills = 0;
	player[currentPlayer].strength = 80 + rand()%21;
	player[currentPlayer].dexterity = 80 + rand()%21;
}
	
	
	
	
