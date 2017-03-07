#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <stdbool.h>

enum playerTypes {ELF, HUMAN, OGRE, WIZARD}; // enumeration for the type of player
enum slotTypes {CITY, HILL, LEVEL_GROUND}; // enumeration for the type of slot
enum playerActions {ATTACK, MOVE}; // enumeration for the type of slot



struct player
{
	char name[20]; // user name
	enum playerTypes type; // enum playerTypes called playerType

	int lifePoints; // lifepoints the player has
	int position;

	// player capabilities
	int smartness;
	int strength;
	int magic;
	int luck;
	int dexterity;
};

// definition of struct slot
struct slots {
	enum slotTypes type; // enum slotTypes called slotType
	bool occupied = false; // boolean value to see if theres a player in the slot
	int player; // integer variable to indicate which player is in the slot if there is a player in the slot
};

int slotNumber; // global integer variable slotNumber
int playerNumber; // global integer variable playerNumber

// Function Prototypes
<<<<<<< HEAD
void slotInitialize(struct slots slot[], struct slots slot[]); // function to randomly select the type of slot for the array
=======
void stats( int *dex, int *l, int *m, int *st, int *sm, int *u);
void print(int p,int choice);
void slotTypeRandom(struct slots slot[]); // function to randomly select the type of slot for the array
>>>>>>> 95fca5f7ff0f7ee620c9580433ce8ac6788e2f27
void playerInitialize(struct players player[]); // function to initialize the structure of players
void playerPositionStart(struct slots slot[], struct players player[]); // function to put each player in a slot
void playerTurn(struct slots slot[], struct players player[], int currentPlayer); // function for the current players turn
void playerMove(struct slots slot[], struct players player[], int currentPlayer, int currentSlot, int previousSlot, int nextSlot); // function to complete a players move

#endif /* OPERATIONS_H_ */
