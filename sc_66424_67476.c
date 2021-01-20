#include <stdio.h>

int main(void)
{

 int coke_can = 10;
 int coke_bottle = 10;
 int revive = 10;
 int coffee = 10;
 int soya = 10;
 int yogurt = 10;
 int water = 10;
 int number;
 int selection = 1;
 float total_earned = 0;  
 
 
 
	
	
  	// Looping
  	do
  	{	
			printf("Do you wish to buy something? ^_^");
			printf("\nPress 0 to continue\n");
			printf("Press 1 to quit\n");
			scanf("%d", &selection);
			
			if (selection == 0)
			{
				while (number != 8)
				{
					// Menu Screen
			  		printf("\n\n\t\t^_^Welcome to E-vend^_^\n\n");
		  		
			  		// Display of drinks 
				  	printf("\nNumber");
				  	printf("\t\tDrinks");
				  	printf("\t\tCost");
				  	printf("\t\tAmount\n");
				  	printf("1.	\tCoke (can)	RM 1.00	\t(%d)\n",	coke_can);
					printf("2.	\tCoke (bottle)	RM 2.00	\t(%d)\n",	coke_bottle);
					printf("3.	\tRevive (can)	RM 1.00	\t(%d)\n",	revive);
					printf("4.	\tCoffee (can)	RM 1.00	\t(%d)\n",	coffee);
					printf("5.	\tSoya (can)	RM 1.00	\t(%d)\n",	soya);
					printf("6.	\tYogurt (bottle)	RM 2.00	\t(%d)\n",	yogurt);
					printf("7.	\tWater (bottle)	RM 1.00	\t(%d)\n",	water);
					printf("Please select a drink or press [8] to quit: \n");
					scanf("%d", &number);
					
					// Selection of drinks or quit 	
					switch (number) 
					{
							
					 case 1:
					 	if (coke_can != 0)
						{
							printf("You selected Coke (can)\n\n");
							coke_can = --coke_can;
							total_earned += 1.00;			
						}
						else if (coke_can < 1)
						{
							printf("Coke (can) has run out of stock\n");				
						}
						break;
						
						
					case 2:
						if (coke_bottle != 0)
						{
							printf("You selected Coke (bottle)\n\n");
							coke_bottle = --coke_bottle;
							total_earned += 2.00;
						}
						else if (coke_bottle < 1)
						{
							printf("Coke (bottle) has run out of stock\n");
						}
						break;
						
						
					case 3:
						if (revive != 0)
						{
							printf("You selected  Revive (can)\n\n");
							revive = --revive;
							total_earned += 1.00;		
						}
						else if (revive < 1)
						{
							printf("revive (can) has run out of stock\n");
						}
						break;
						
						
					case 4:
						if (coffee != 0)
						{
							printf("You selected  Coffee (can)\n\n");
							coffee = --coffee;	
							total_earned += 1.00;	
						}
						else if (coffee < 1)
						{
							printf("coffee (can) has run out of stock\n");
						}
						break;
						
						
					case 5:
						if (soya != 0)
						{
							printf("You selected  Soya(can)\n\n");
							soya = --soya;
							total_earned += 1.00;
						}
						else if (soya < 1)
						{
							printf("\nsoya (can) has run out of stock\n");
						}
						break;
						
						
					case 6:
						if (yogurt != 0)
						{
							printf("You selected  Yogurt (bottle)\n\n");
							yogurt = --yogurt;
							total_earned += 2.00;
						}
						else if (yogurt < 1)
						{
							printf("\nyogurt (bottle) has run out of stock\n");
						}
						break;
						
						
					case 7:
						if (water != 0)
						{
							printf("You selected  Water (bottle)\n\n");
							water = --water;
							total_earned += 1.00;
						}
						else if (water < 1)
						{
							printf("\nwater (bottle) has run out of stock\n");
						}
						break;
						
					case 8:
						printf("\n\t\t^_^Please come again TQ^_^.\n\n");
						break;
						
						
					default :
							printf ("Invalid\n" );
					
					}
					
				}
				
			}
			
			else if (selection == 1)
			{
				printf("\n\t\t^_^Please come again TQ^_^.\n\n");
				return 0;
			}
	  		
		  
			
	}
	while (number != 8);
	
	// Display the number of units of each drink left in the machine and the total amount of money the machine earned
	printf("	coke(can)	left is = %d\n", coke_can);
	printf("	coke(bottle)	left is = %d\n", coke_bottle);
	printf("	revive(can)	left is = %d\n", revive);
	printf("	coffee(can)	left is = %d\n", coffee);
	printf("	soya(can)	left is = %d\n", soya);
	printf("	yogurt(bottle)	left is = %d\n", yogurt);
	printf("	water(bottle)	left is = %d\n", water);
	printf("	total earned		= %.2f\n", total_earned);
	
	
	
	return 0;
}
