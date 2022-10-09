//Beer on the wall: Beer inCeption
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int beer;
	int beerold;
	char beerstr[100];
	
	puts("Pick a number, Any (whole) number!");
	gets(beerstr);
	beer = atoi(beerstr);
	beerold = beer;
	
	int count()
	{
		if(beer>0)
		{
			printf("%i bottles of beer on the wall,\n",beer);
			sleep(1);
			printf("%i bottles of beer!\n",beer);
			sleep(1);
			printf("Take one down,\n");
			sleep(1);
			printf("Pass it around,\n");
			sleep(1);
			beer = beer - 1;
			printf("%i bottles of beer on the wall!\n",beer);
			sleep(1);
			count();
		}
		else
		{
			printf("No more bottles of beer on the wall!\n");
			sleep(1);
			printf("No more bottles of beer,\n");
			sleep(1);
			printf("Head to the store,\n");
			sleep(1);
			printf("Buy some more,\n");
			sleep(1);
			printf("...\n");
			sleep(5);
			beer = beerold;
			printf("%i bottles of beer on the wall!\n",beer);
			sleep(1);
			count();
    	}
	}
count();
}