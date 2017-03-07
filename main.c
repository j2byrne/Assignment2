#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.h" // operations header

int main(void)
{
	struct players player[6]; // struct players called player
	struct slots slot[20]; // struct slots called slot

	srand(time(NULL)); // seed the rand function

	// ask user for the number of players and verify that it is between 1 and 6
	do
	{
		printf("Please enter the number of players (max = 6): "); // prompt
		scanf("%d", &playerNumber); // read the number of players from the user
	} while (playerNumber > 6 || playerNumber < 1); // validate that it is between 1 and 6

	playerInitialize(player);

	// ask user for the number of slots and verify that it is between 1 and 20
	do
	{
		printf("Please enter the number of slots (from %d to 20): ", playerNumber); // prompt
		scanf("%d", &slotNumber); // read the number of slots from the user
	} while (slotNumber > 20 || slotNumber < playerNumber); // validate that it is between 1 and 20

	slotInitialize(slot); // call function to setup slot types

	playerPositionStart(slot, player); // call function to position each player in a slot

	while (1 == 1) // *********************** NEEDS TO CHANGE, THIS IS JUST UNTIL WE FIGURE OUT ABOUT WHEN SOMEONE WINS ETC ********************
	{
		// loop through each player
		for (int currentPlayer = 0; currentPlayer < playerNumber; currentPlayer++)
		{
			playerMove(slot, player, currentPlayer) // call playerTurn function
		}
	}

	return 0;
}
