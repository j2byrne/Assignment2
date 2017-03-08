#include <stdlib.h>
#include "operations.h" // operations header

void slotInitialize(struct slots slot[])
{
	// loop though each slot
	for (size_t currentSlot = 0; currentSlot < slotNumber-1; currentSlot++)
	{
		slot[currentSlot].type = rand()%3;
		slot[currentSlot].occupied = false;
	}
}
