#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Players{
	char name_one[20];
	int lifepoints;
	int type;
	int smartness,strength,magic,luck,dexterity,health;
	};
	
struct Players cases[6];
void player_type_function(int *t, int *d, int *l, int *m_s, int *st, int *sm, int *Index);
void player_type(int type_integer);	
void print_players();

int main(void)
{
	int p,i,j;
	printf("How many players are there?: ");   //  Gets the number of players
	scanf("%d",&p);
	
	int array[p];   // initilizes two arrays: one for player types and the other for player names
	char a[p][p];
	
	for(i=0;i<p;i++)
	{
		int t=0, d=0, sm=0, st=0, l=0, m_s=0,choice;
		printf("Enter your name: ");   // stores each name in the character array "a"
		scanf("%s",&cases[i].name_one);
		
		printf("Choose your type: \n1 for Ogre \n2 for Human \n3 for Wizard \n4 for Elf\n");   // stores a number correalating to each player type
		scanf("%d",&choice);
		
		switch(choice)
			{
			case 1:{
				cases[i].type = 0;     
				break;
			}
			case 2:{
				cases[i].type = 1;
				break;
			}
			case 3:{
				cases[i].type = 2;
				break;
			}
			case 4:{
				cases[i].type = 3;
				break;

			}
			default:{
				printf("ERROR!");
				exit(0);
			}
			}
			
			player_type_function(&t, &d, &l, &m_s, &st, &sm, &i); 
			cases[i].dexterity =d;
			cases[i].luck = l;
			cases[i].magic =m_s;
			cases[i].strength = st;
			cases[i].smartness= sm;
			cases[i].health = 100;
	}	

	
	

			print_players(p);	
    return 0;
	
}

void player_type_function(int *t, int *d, int *l, int *m_s, int *st, int *sm, int *index)
{
	srand(time(NULL));
	if(cases[*index].type == 0)
	{
		//Limitations and requirements of the Ogre Type skills are adhered in this block.
		printf("\nOGRE\n");
		do{
			*sm = rand()%20;
			*l = rand()%100;
		}while((*sm+*l)>51);
		*m_s=0;
		do{*st = rand()%100;
		}while(*st<80);
		do{*d = rand()%100;
		}while(*d<80);
	}
	else if(cases[*index].type == 1)
	{
		//Limitations and requirements of the Human Type skills are adhered in this block.
		do{
			*m_s=1+rand()%100;
			*sm = 1+rand()%70;
			*st = 1+rand()%100;
			*l= 1+rand()%100;
			*d= 1+rand()%100;
		}while((*m_s+*sm+*st+*l+*d)>300);
	}
	else if(cases[*index].type == 2)
	{
		//Limitations and requirements of the Wizard Type skills are adhered in this block.
		*m_s=25;
		do{
			*sm = rand()%100;
		}while(*sm<90);
		*st = rand()%20;
		*d=rand()%100;
		do{
			*l = rand()%100;
		}while(*l<50);
	}
	else if(cases[*index].type == 3)
	{
		//Limitations and requirements of the Elf Type skills are adhered in this block.
		do{
			*m_s=rand()%80;
		}while(*m_s<50);
		do{
			*sm = rand()%100;
		}while(*sm<70);
		*st = rand()%50;
		*d=rand()%100;
		do{
			*l = rand()%100;
		}while(*l<50);
	}

	else{
		printf("ERROR CANNOT ASSIGN VALUE TO CHARACTER");
		exit(0);
	}

}

void print_players()
{
	
    int p = 6;
	for(int i=0; i<p; i++)
	{
		
		int count = cases[i].type;
		printf("Player Name: %s \n", cases[i].name_one);
		printf("Player Type: ");
		player_type(count);
		printf("\nPlayer Health: %d\n", cases[i].health);
		printf("Player Dexterity: %d\n", cases[i].dexterity);
		printf("Player Luck: %d\n", cases[i].luck);
		printf("Player Magic Skills: %d\n", cases[i].magic);
		printf("Player Strength: %d\n", cases[i].strength);
		printf("Player Smartness: %d\n", cases[i].smartness);
		printf("\n*********************************************************\n");
	}

}

void player_type(int type_Integer)
{
	char type[6];
	if(type_Integer == 0)
	{
		printf( "Ogre");
	}
	else if(type_Integer ==1)
	{
		printf("Human");
	}
	else if(type_Integer ==2)
	{
		printf("Wizard");
	}
	else if(type_Integer ==3)
	{
		printf("Elf");
	}
	else{
		printf("ERROR");
	}


}





