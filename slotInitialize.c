#include <stdlib.h>
#include "operations.h" // operations header

void slotInitialize(struct slots slot[])
{
	// loop though each slot
	for (size_t i = 0; i < slotNumber-1; i++)
	{
		slot[i].type = rand()%3;
	}
}
