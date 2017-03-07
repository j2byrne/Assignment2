#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "operations.h" // operations header

struct player arrays[6];
int main(void)
{
	int p,i,j,choice;
	printf("How many players are there?: ");  
	scanf("%d",&playernumber);
	
	int array[playernumber];   
	char a[playnumber][playnumber];
	
	for(i=0;i<p;i++)
	{
		int  dex=0, sm=0, st=0, l=0, m=0;
		printf("Enter your name: ");  
		scanf("%s",&arrays[i].name);
		
		printf("Choose your type: \n1 for Ogre \n2 for Human \n3 for Wizard \n4 for Elf\n");   
		scanf("%d",&choice);
		
		switch(choice)
			{
			case 1:{
				arrays[i].class = 0;     
				break;
			}
			case 2:{
				arrays[i].class = 1;
				break;
			}
			case 3:{
				arrays[i].class = 2;
				break;
			}
			case 4:{
				arrays[i].class = 3;
				break;

			}
			default:{
				printf("ERROR!");
				exit(0);   
			}
			}
			
			stas( &dex, &l, &m, &st, &sm, &i); 
			arrays[i].dexterity =dex;
			arrays[i].luck = l;
			arrays[i].magic =m;
			arrays[i].strength = st;
			arrays[i].smartness= sm;
			arrays[i].lifepoints = 100;
	}	

	print(playernumber ,choice);	
	
	
	
	
	srand(time(NULL)); // seed the rand function

	
	struct slots slot[20]; // struct slots called slot

	// ask user for the number of players and verify that it is between 1 and 6
	
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
