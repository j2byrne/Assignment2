#include <stdio.h>
#include <stdlib.h>
#include "operations.h" // operations header

void playerInitialize(struct players player[], struct slots slot[])
{
	for (int currentPlayer = 0; currentPlayer < playerNumber-1; currentPlayer++)
	{
		int random; // integer for random number generated

		printf("Please input a players name followed by the player type, 0 for Elf, 1 for Human, 2 for Ogre and 3 for Wizard: "); // prompt
		scanf("%s %d", player[currentPlayer].name, &player[currentPlayer].type); // read player name and type from user and assign data to player structure

		// check if player type input from user is valid and if not request to give another input that is valid
		while (player[currentPlayer].type > 3)
		{
			printf("Please input a valid input for the player type 0 for Elf, 1 for Human, 2 for Ogre and 3 for Wizard: "); // prompt
			scanf("%d", &player[currentPlayer].type); // read player name and type from user and assign data to player structure
		}

		player[currentPlayer].lifePoints = 100; // set lifePoints to 100
		player[currentPlayer].smartness = 50;
		player[currentPlayer].strength = 50;
		player[currentPlayer].magicSkills = 50;
		player[currentPlayer].luck = 50;
		player[currentPlayer].dexterity = 50;
	}
}
