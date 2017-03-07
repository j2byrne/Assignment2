void stats( int *dex, int *l, int *m, int *st, int *sm, int *u)
{
	srand(time(NULL));
	if(players[*u].class == 0)
	{
		
		//if the player has chosen to be an ogre then it assigns random values for its stats based on the paramaters in the question

		do{                       // same thing for the rest of the classe
		*sm = rand()%20;                 // dex = dexterity,sm = smartness,etc.
		*l = rand()%100;             
		
		}while((*sm+*l)>51);
		*m=0;
		
		do{*st = rand()%100;       //ogre
		}while(*st<80);
		
		do{*dex = rand()%100;
		}while(*dex<80);
	}
	else if(players[*u].class == 1)
	{

		do{
			*m=1+rand()%100;              //human
			*sm = 1+rand()%70;
			*st = 1+rand()%100;
			*l= 1+rand()%100;
			*dex= 1+rand()%100;
			
		}while((*m+*sm+*st+*l+*dex)>300);
	}
	else if(players[*u].class == 2)
	{
		
		*m=25;
		do{
		*sm = rand()%100;                        //wizard
		}while(*sm<90);
		
		*st = rand()%20;
		
		*dex=rand()%100;
		
		do{
			*l = rand()%100;
		}while(*l<50);
	}
	else if(players[*u].class == 3)
	{
		do{
		*m=rand()%80;                         //elf
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
