#include <stdlib.h>

void playerPositionStart(struct slots slot[], struct players player[])
{
	for (size_t i = 0; i < playerNumber-1; i++)
	{
		int position;
		do
		{
			position = rand()%slotNumber;
		} while (slot[position].playerPtr != NULL);

		slot[position].playerPtr = &player[i];
	}
}
