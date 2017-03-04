#include <stdbool.h>

void playerMove(struct slots slot[], struct players player[], int currentPlayer, int currentSlot, int previousSlot, int nextSlot)
{
	int playerMove; // position that the player will move to
	int moveSlot; // user choice to move player

	if (slot[previousSlot].occupied == false && slot[nextSlot].occupied != false) // check if the only neighboring slot is the previous slot
	{
		printf("You will move to the previous slot (slot %d) as the next slot (slot %d) is occupied by another player", previousSlot, nextSlot); // message to user indicating that they will move to the previous slot
		playerMove = previousSlot; // setting playerMove to the previousSlot
	}
	else if (slot[previousSlot].occupied != false && slot[nextSlot].occupied == false)  // check if the only neighboring slot is the next slot
	{
		printf("You will move to the next slot (slot %d) as the previous slot (slot %d) is occupied by another player", nextSlot, previousSlot); // message to user indicating that they will move to the next slot
		playerMove = nextSlot; // setting playerMove to the nextSlot
	}
	else if (slot[previousSlot].occupied == false && slot[nextSlot].occupied == false) // check if the only neighboring slot is the previous slot
	{
		// do while loop to see which slot the player wants to move to and check if the input is valid
		do
		{
			printf("Please enter 0 to move to the previous slot (slot %d) or 1 to move to the next slot (slot %d): "); // prompt
			scanf("%d", &moveSlot); // read user input for which slot they want to move to
		} while (moveSlot > 1 || moveSlot < 0); // check if the input is valid
		(moveSlot == 0) ? playerMove = previousSlot : playerMove = nextSlot; // conditional to set the playerMove to the number of the slot that the user wants the player to move to
	}

	slot[currentSlot].occupied = false; // set slot that the player was in to being not occupied
	slot[playerMove].occupied = true; // set slot that the player is moving to to being occupied
	slot[playerMove].player = currentPlayer; // set the number of the player to the slot

	player[currentPlayer].position = playerMove; // change the slot the player is in to the number of the new slot
}
