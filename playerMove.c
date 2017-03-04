#include <stdlib.h>

void playerMove(struct slots slot[], struct players player[], int currentPlayer, int previousSlot, int nextSlot)
{
	int moveSlot;
	int playerMove;

	if (slot[previousSlot].playerPtr == NULL && slot[nextSlot].playerPtr != NULL)
	{
		printf("You will move to the previous slot (slot %d) as the next slot (slot %d) is occupied by another player", previousSlot, nextSlot);
		moveSlot = previousSlot;
	}
	else if (slot[previousSlot].playerPtr != NULL && slot[nextSlot].playerPtr == NULL)
	{
		printf("You will move to the next slot (slot %d) as the previous slot (slot %d) is occupied by another player", nextSlot, previousSlot);
		moveSlot = nextSlot;
	}
	else if (slot[previousSlot].playerPtr == NULL && slot[nextSlot].playerPtr == NULL)
	{
		printf("Please enter 0 to move to the previous slot (slot %d) or 1 to move to the next slot (slot %d): ");
		scanf("%d", &moveSlot);
		(moveSlot == 0) ? playerMove = previousSlot : playerMove = nextSlot;
	}


}
