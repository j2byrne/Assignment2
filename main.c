#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.h" // operations header

int main(void)
{
	srand(time(NULL)); // seed the rand function

	struct players player[6]; // struct players called player
	struct slots slot[20]; // struct slots called slot

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
		printf("Please enter the number of slots (max = 20): "); // prompt
		scanf("%d", &slotNumber); // read the number of slots from the user
	} while (slotNumber > 20 || slotNumber < 1); // validate that it is between 1 and 20

	slotTypeRandom(slot);

	playerPositionStart(slot, player);

	while (1 == 1)
	{

	}

	return 0;
}
