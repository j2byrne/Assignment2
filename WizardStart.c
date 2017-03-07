#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void wizardStart( struct player player[])
{
	    player[currentPlayer].magicSkills=80 + rand()%21;
		
		player[currentPlayer].smartness = 90 + rand()%11;
		
		player[currentPlayer].strength = rand()%21;
		
		player[currentPlayer].dexterity=rand()%100;
		
		
	    player[currentPlayer].luck = 50+ rand()%51;
		
}