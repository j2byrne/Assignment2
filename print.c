void print(int playernumber , int choice)
{
	
   
	for(int i=0; i<playernumber; i++)
	{
		
		int count = players[i].class;
		printf("Player Name: %s \n", players[i].name);
		printf("Player Class: ");
		//type(count);
		if(choice == 1)
	    {
	    printf( "Ogre");
	    }
	    else if(choice ==2)
	    {
	    printf("Human");
	    }
	    else if(choice ==3)
	    {
	    printf("Wizard");
	    }
	    else if(choice ==4)
	    {
	    printf("Elf");
	    }
		
		printf("\nHealth is: %d\n", players[i].health);
		printf("Dexterity is: %d\n", players[i].dexterity);
		printf("Luck is : %d\n", players[i].luck);
		printf("Magic Skills are: %d\n", players[i].magic);
		printf("Strength is: %d\n", players[i].strength);
		printf("Smartness: %d\n", players[i].smartness);
		printf("\n");
	}

}
