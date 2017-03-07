#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.h" // operations header

struct player players[6];  // creates an array of 6 structures
int main(void)
{
<<<<<<< HEAD
	struct players player[6]; // struct players called player
=======
	int p,i,j,choice;
	printf("How many players are there?: ");  // stores the number of players in playernumber
	scanf("%d",&playernumber);
	
	for(i=0;i<p;i++)     // loop to store data on each player
	{
		int  dex=0, sm=0, st=0, l=0, m=0;  // variables to store data on each player
		printf("Enter your name: ");       // stores name of each player
		scanf("%s",&players[i].name);
		
		printf("Choose your type: \n1 for Ogre \n2 for Human \n3 for Wizard \n4 for Elf\n");   
		scanf("%d",&choice);  // stores class of each player
		
		switch(choice)
			{
			case 1:{
				players[i].class = 0;     
				break;
			}
			case 2:{
				players[i].class = 1;
				break;
			}
			case 3:{
				players[i].class = 2;
				break;
			}
			case 4:{
				players[i].class = 3;
				break;

			}
			default:{
				printf("ERROR!");
				exit(0);   
			}
			}
			
			stats( &dex, &l, &m, &st, &sm, &i); 
			players[i].dexterity =dex;
			players[i].luck = l;
			players[i].magic =m;
			players[i].strength = st;
			players[i].smartness= sm;
			players[i].lifepoints = 100;
	}	

	print(playernumber ,choice);	
	
	
	
	
	srand(time(NULL)); // seed the rand function

	
>>>>>>> 95fca5f7ff0f7ee620c9580433ce8ac6788e2f27
	struct slots slot[20]; // struct slots called slot

	srand(time(NULL)); // seed the rand function

	// ask user for the number of players and verify that it is between 1 and 6
	
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
