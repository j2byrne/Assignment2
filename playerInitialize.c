#include <stdio.h>
#include <stdlib.h>
#include "operations.h" // operations header

void playerInitialize(struct players player[])
{
	for (int currentPlayer = 0; currentPlayer < playerNumber-1; currentPlayer++)
	{
		printf("Please input a players name followed by the player type, 0 for Elf, 1 for Human, 2 for Ogre and 3 for Wizard: "); // prompt
		scanf("%s %d", player[currentPlayer].name, &player[currentPlayer].type); // read player name and type from user and assign data to player structure

		// check if player type input from user is valid and if not request to give another input that is valid
		while (player[currentPlayer].type > 3)
		{
			printf("Please input a valid input for the player type 0 for Elf, 1 for Human, 2 for Ogre and 3 for Wizard: "); // prompt
			scanf("%d", &player[currentPlayer].type); // read player name and type from user and assign data to player structure
		}

		player[currentPlayer].lifePoints = 100; // set lifePoints to 100

		// calling function depending on the player type
		switch (player[currentPlayer].type)
		{
			case ELF:
				elfStart(player, currentPlayer); // call function elfStart
				break;
			case HUMAN:
				humanStart(player, currentPlayer); // call function humanStart
				break;
			case OGRE:
				ogreStart(player, currentPlayer); // call function ogreStart
				break;
			case WIZARD:
				wizardStart(player, currentPlayer); // call function wizardStart
				break;
			default:
				break;
		}
	}
}
