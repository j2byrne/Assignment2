#include <stdio.h>
#include "operations.h" // operations header

void playerInitialize(struct players player[])
{
	printf("\n\nWORKING %d\n\n", playerNumber);
	for (int i = 0; i < playerNumber-1; i++)
	{
		printf("Please input a players name followed by the player type, 0 for Elf, 1 for Human, 2 for Ogre and 3 for Wizard: "); // prompt
		scanf("%s %d", player[i].name, &player[i].type); // read player name and type from user and assign data to player structure

		while (player[i].type > 3)
		{
			printf("Please input a valid input for the player type 0 for Elf, 1 for Human, 2 for Ogre and 3 for Wizard: "); // prompt
			scanf("%d", &player[i].type); // read player name and type from user and assign data to player structure
		}

		player[i].lifePoints = 100; // set lifePoints to 100
		player[i].smartness = 50;
		player[i].strength = 50;
		player[i].magicSkills = 50;
		player[i].luck = 50;
		player[i].dexterity = 50;

		printf("%s %d\n", player[i].name, player[i].type);

	}
}
