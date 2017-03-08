#include <stdio.h>
#include <stdbool.h>
#include "operations.h"

void playerTurn(struct slots slot[], struct players player[], int currentPlayer)
{
	int previousSlot = (slotNumber-2 + currentPlayer ) % slotNumber; // previous slot to the one that the player is in, equation to account for negative values
	int nextSlot = (slotNumber + currentPlayer ) % slotNumber;// next slot to the one that the player is in, equation to account for when the number is greater than or equal to the slotNumber
	enum playerActions playerAction; // enum playerActions to store what the player is going to do

	if (slot[previousSlot].occupied != false && slot[nextSlot].occupied != false) // When there are no empty neighboring slots
	{
		printf("There are no empty neighboring slots, you must attack!\n"); // message
		//playerAttack(); // call player attack function
	}
	else // When there are empty neighboring slots
	{
		printf("Please enter 0 if you want to attack of 1 if you want to move: "); // prompt
		scanf("%d", &playerAction); // read integer which is saved in the enumeration playerAction to determine whether the player wants to attack another player or move position

		// switch to determine the players action
		switch (playerAction)
		{
			case ATTACK: // case for when player wants to attack

				break;
			case MOVE: // case for when player wants to move position
				playerMove(slot, player, currentPlayer, previousSlot, nextSlot); // call playerMove function
				break;
			default:
				break;
		}
	}
}
