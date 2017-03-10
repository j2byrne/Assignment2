#include <stdio.h>
#include "operations.h"

void printPlayers (struct players player[])
{
	printf("\n---------------------Current Players Life points---------------------\n"); // message to user

	// for loop to print out information about each player

	for (int printPlayer = 0; printPlayer < playerNumber; printPlayer++)
	{
		char type[4][7] = {"Elf", "Human", "Ogre", "Wizard"}; // array of strings of the player types (order is the same as the enumerator playerTypes
		char *playerType = type[player[printPlayer].type]; // character pointer to the player type in the array of strings

		printf("%s (%s, %d)", player[printPlayer].name, playerType, player[printPlayer].lifePoints); // print out player name, type and their life points
	}
	puts(""); // newline
}
