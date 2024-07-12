#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void splash()
{
	int i=0;
	time_t t;
	time(&t);
	//SPLASH SCREEN
	printf("------------------------------------------------------------------------------\n");
	printf("|  000000  000000  000000  000000  000000  000000  0      0  000000  0000000 |\n");
	printf("|  0       0    0  0       0          0       0    0 0    0  0       0       |\n");
	printf("|  0  0000 000000  000000  000000     0       0    0   0  0  0  0000 0000000 |\n");
	printf("|  0    0  0  0    0       0          0       0    0    0 0  0    0        0 |\n");
	printf("|  000000  0   0   000000  000000     0    000000  0     00  000000  0000000 |\n");
	printf("|                                                                            |\n");
	printf("------------------------------------------------------------------------------\n");
	printf("           *************************************************\n");
	printf("           *                                               *\n");
	printf("           *      ----------------------------------       *\n");
	printf("           *       WELCOME TO HOTEL SWAGATH GRAND          *\n");
	printf("           *      ----------------------------------       *\n");
	printf("           *                                               *\n");
	printf("           *      Brought To You By vgsinfotech.in         *\n");
	printf("           *               Hyderabad                       *\n");
	printf("           *      CONTACT US: 123456789,0123456789         *\n");
	printf("           *************************************************\n");
	printf("\n");
	printf("\n");
	for(i=0;i<80;i++)
		printf("-");
	printf("\nCurrent date and time : %s",ctime(&t));
	for(i=0;i<80;i++)
		printf("-");
		
	printf("\n\nPress any key to continue:");
	getch();
}
