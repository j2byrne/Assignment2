#ifndef OPERATIONS_H_
#define OPERATIONS_H_

enum playerTypes {ELF, HUMAN, OGRE, WIZARD}; // enumeration for the type of player
enum slotTypes {CITY, HILL, LEVEL_GROUND}; // enumeration for the type of slot
enum playerActions {ATTACK, MOVE}; // enumeration for the type of slot

struct player arrays[6];

struct player
{
	char name[20]; // user name
	enum playerTypes type; // enum playerTypes called playerType

	int lifePoints; // lifepoints the player has

	// player capabilities
	int smartness;
	int strength;
	int magic;
	int luck;
	int dexterity;
	int health;
};

// definition of struct slot
struct slots {
	enum slotTypes type; // enum slotTypes called slotType
	struct players *playerPtr; // pointer to a user set to NULL
};

int slotNumber; // global integer variable slotNumber
int playerNumber; // global integer variable playerNumber

// Function Prototypes
void stats( int *dex, int *l, int *m, int *st, int *sm, int *u);
void print(int p,int choice);
void slotTypeRandom(struct slots slot[]); // function to randomly select the type of slot for the array
void playerInitialize(struct players player[]); // function to initialize the structure of players
void playerPositionStart(struct slots slot[], struct players player[]); // function to put each player in a slot
void playerTurn(struct slots slot[], struct players player[]);

#endif /* OPERATIONS_H_ */
