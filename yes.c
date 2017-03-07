#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct player{
	char name[20];
	int lifepoints;
	int class;
	int smartness,strength,magic,luck,dexterity,health;
	};
	
struct player arrays[6];
void player_type_function( int *dex, int *l, int *m, int *st, int *sm, int *u);
void type(int k);	
void print();

int main(void)
{
	int p,i,j;
	printf("How many players are there?: ");  
	scanf("%d",&p);
	
	int array[p];   
	char a[p][p];
	
	for(i=0;i<p;i++)
	{
		int  dex=0, sm=0, st=0, l=0, m=0,choice;
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
			
			player_type_function( &dex, &l, &m, &st, &sm, &i); 
			arrays[i].dexterity =dex;
			arrays[i].luck = l;
			arrays[i].magic =m;
			arrays[i].strength = st;
			arrays[i].smartness= sm;
			arrays[i].health = 100;
	}	

	print(p);	
    return 0;
	
}

void player_type_function( int *dex, int *l, int *m, int *st, int *sm, int *u)
{
	srand(time(NULL));
	if(arrays[*u].class == 0)
	{
		
		printf("\nOGRE\n");
		do{
		*sm = rand()%20;
		*l = rand()%100;
		
		}while((*sm+*l)>51);
		*m=0;
		
		do{*st = rand()%100;
		}while(*st<80);
		
		do{*dex = rand()%100;
		}while(*dex<80);
	}
	else if(arrays[*u].class == 1)
	{

		do{
			*m=1+rand()%100;
			*sm = 1+rand()%70;
			*st = 1+rand()%100;
			*l= 1+rand()%100;
			*dex= 1+rand()%100;
			
		}while((*m+*sm+*st+*l+*dex)>300);
	}
	else if(arrays[*u].class == 2)
	{
		
		*m=25;
		do{
		*sm = rand()%100;
		}while(*sm<90);
		
		*st = rand()%20;
		
		*dex=rand()%100;
		
		do{
			*l = rand()%100;
		}while(*l<50);
	}
	else if(arrays[*u].class == 3)
	{
		do{
		*m=rand()%80;
		}while(*m<50);
		do{
		*sm = rand()%100;
		}while(*sm<70);
		
		*st = rand()%50;
		
		*dex=rand()%100;
		
		do{
			*l = rand()%100;
		}while(*l<50);
	}

	else{
		printf("ERROR CANNOT ASSIGN VALUE TO CHARACTER");
		exit(0);
	}

}

void print()
{
	
    int p = 6;
	for(int i=0; i<p; i++)
	{
		
		int count = arrays[i].class;
		printf("Player Name: %s \n", arrays[i].name);
		printf("Player Class: ");
		type(count);
		printf("Health is: %d\n", arrays[i].health);
		printf("Dexterity is: %d\n", arrays[i].dexterity);
		printf("Luck is : %d\n", arrays[i].luck);
		printf("Magic Skills are: %d\n", arrays[i].magic);
		printf("Strength is: %d\n", arrays[i].strength);
		printf("Smartness: %d\n", arrays[i].smartness);
		printf("\n");
	}

}

void type(int k)
{
	char type[6];
	if(k == 0)
	{
	printf( "Ogre");
	}
	else if(k ==1)
	{
	printf("Human");
	}
	else if(k ==2)
	{
	printf("Wizard");
	}
	else if(k ==3)
	{
	printf("Elf");
	}
	

}





