#include <stdio.h>
#include "operations.h"

void printPlayers (struct players player[])
{
	printf("\n---------------------Current Players Life points---------------------\n");
	for (int printPlayer = 0; printPlayer < playerNumber; printPlayer++)
	{
		char type[4][7] = {"Elf", "Human", "Ogre", "Wizard"};
		char *playerType = type[player[printPlayer].type];

		printf("%s (%s, %d)\n", player[printPlayer].name, playerType, player[printPlayer].lifePoints);
	}
	puts("");
}
