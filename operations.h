#ifndef OPERATIONS_H_
#define OPERATIONS_H_

enum playerTypes {ELF, HUMAN, OGRE, WIZARD}; // enumeration for the type of player
enum slotTypes {CITY, HILL, LEVEL_GROUND}; // enumeration for the type of slot
enum playerActions {ATTACK, MOVE}; // enumeration for the type of slot

struct players
{
	char name[20]; // user name
	enum playerTypes type; // enum playerTypes called playerType

	int lifePoints; // lifepoints the player has

	// player capabilities
	int smartness;
	int strength;
	int magicSkills;
	int luck;
	int dexterity;
};

// definition of struct slot
struct slots {
	enum slotTypes type; // enum slotTypes called slotType
	struct players *playerPtr; // pointer to a user set to NULL
};

int slotNumber; // global integer variable slotNumber
int playerNumber; // global integer variable playerNumber

// Function Prototypes
void slotTypeRandom(struct slots slot[]); // function to randomly select the type of slot for the array
void playerInitialize(struct players player[]); // function to initialize the structure of players
void playerPositionStart(struct slots slot[], struct players player[]); // function to put each player in a slot
void playerTurn(struct slots slot[], struct players player[], int currentPlayer); // function for the current players turn
void playerMove(struct slots slot[], struct players player[], int currentPlayer, int previousSlot, int nextSlot); // function to complete a players move

#endif /* OPERATIONS_H_ */
