#ifndef OPERATIONS_H_
#define OPERATIONS_H_

typedef struct user
{
  char name[20]; // user name
  char type[10]; // user type

  int lifePoints; // lifepoints the player has

  // player capabilities
  int smartness;
  int strength;
  int magicSkills;
  int luck;
  int dexterity;
} user;

struct board {
  char type[20]; // type of slot
  int position; // position of slot
  int nextPosition; // position of next slot

  /**** Struct not finished ****/
} board;

//Function Prototypes go here

#endif /* OPERATIONS_H_ */
