void print(int p , int choice)
{
	
   
	for(int i=0; i<p; i++)
	{
		
		int count = arrays[i].class;
		printf("Player Name: %s \n", arrays[i].name);
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
		
		printf("\nHealth is: %d\n", arrays[i].health);
		printf("Dexterity is: %d\n", arrays[i].dexterity);
		printf("Luck is : %d\n", arrays[i].luck);
		printf("Magic Skills are: %d\n", arrays[i].magic);
		printf("Strength is: %d\n", arrays[i].strength);
		printf("Smartness: %d\n", arrays[i].smartness);
		printf("\n");
	}

}