#include <stdlib.h>

void playerTurn(struct slots slot[], struct players player[], int currentPlayer)
{
	int previousSlot = (slotNumber-2 + currentPlayer ) % slotNumber; // previous slot to the one that the player is in, equation to account for negative values
	int nextSlot = (slotNumber + currentPlayer ) % slotNumber;// next slot to the one that the player is in, equation to account for when the number is greater than or equal to the slotNumber
	enum playerActions playerAction; // enum playerActions to store what the player is going to do

	if (slot[previousSlot].playerPtr != NULL && slot[nextSlot].playerPtr != NULL) // When there are no empty neighboring slots
	{
		printf("There are no empty neighboring slots, you must attack!\n"); // message
		playerAttack(); //call player attack function
	}
	else // When there are empty neighboring slots
	{
		printf("Please enter 0 if you want to attack of 1 if you want to move: ");
		scanf("%d", &playerAction);

		switch (playerAction)
		{
			case ATTACK:

				break;
			case MOVE:
				playerMove(slot, player, currentPlayer, previousSlot, nextSlot);
				break;
			default:
				break;
		}
	}
}
