#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void wizardStart( struct player player[])
{
	player[currentPlayer].luck = 60 + rand()%41;
	
	player[currentPlayer].smartness = 70 + rand()%31;
	
	player[currentPlayer].strength = 1 + rand()%50;
	
	player[currentPlayer].magicSkills = 51 + rand()%29;
	
	player[currentPlayer].dexterity = 1 + rand()%100;
	
	
	
}


	
	
	
	
	
	
	