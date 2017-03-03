#include <stdlib.h>
#include "operations.h" // operations header

void slotTypeRandom(struct slots slot[])
{
  for (size_t i = 0; i < slotNumber-1; i++)
  {
    slot[i].type = rand()%3;
  }
}
