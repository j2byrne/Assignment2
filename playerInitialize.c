#include <stdio.h>
#include <stdlib.h>
#include "operations.h" // operations header

void playerInitialize(struct players player[])
{
	for (int currentPlayer = 0; currentPlayer < playerNumber; currentPlayer++)
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
				player[currentPlayer].luck = 60 + rand()%41;
				player[currentPlayer].smartness = 70 + rand()%31;
				player[currentPlayer].strength = 1 + rand()%50;
				player[currentPlayer].magicSkills = 51 + rand()%29;
				player[currentPlayer].dexterity = 1 + rand()%100;
				break;
			case HUMAN:
				do {
					player[currentPlayer].magicSkills=1+rand()%100;
					player[currentPlayer].smartness = 1+rand()%100;
					player[currentPlayer].strength = 1+rand()%100;
					player[currentPlayer].luck= 1+rand()%100;
					player[currentPlayer].dexterity= 1+rand()%100;
				} while((player[currentPlayer].magicSkills + player[currentPlayer].smartness + player[currentPlayer].strength + player[currentPlayer].luck + player[currentPlayer].dexterity) >= 300);
				break;
			case OGRE:
				do{
					player[currentPlayer].smartness  = rand()%21;
					player[currentPlayer].luck = rand()%51;
				} while((player[currentPlayer].smartness + player[currentPlayer].luck) > 51);

				player[currentPlayer].magicSkills = 0;
				player[currentPlayer].strength = 80 + rand()%21;
				player[currentPlayer].dexterity = 80 + rand()%21;
				break;
			case WIZARD:
			    player[currentPlayer].magicSkills=80 + rand()%21;
				player[currentPlayer].smartness = 90 + rand()%11;
				player[currentPlayer].strength = rand()%21;
				player[currentPlayer].dexterity=rand()%100;
			    player[currentPlayer].luck = 50+ rand()%51;
				break;
			default:
				break;
		}
	}
}
