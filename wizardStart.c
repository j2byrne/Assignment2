#include <stdlib.h>
#include "operations.h"

void wizardStart( struct players player[], int currentPlayer)
{
	    player[currentPlayer].magicSkills=80 + rand()%21;
		player[currentPlayer].smartness = 90 + rand()%11;
		player[currentPlayer].strength = rand()%21;
		player[currentPlayer].dexterity=rand()%100;
	    player[currentPlayer].luck = 50+ rand()%51;
}
