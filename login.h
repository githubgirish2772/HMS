#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void login()
{
	char username[10]="admin";
	char password[10]="admin";
    char us[10], p[10];
	int n=1,x,y;

	do
	{
		system("cls");
    	printf("\n  **************************  LOGIN FORM  **************************  ");
    	getch();
		printf("\n ENTER USERNAME:");
		scanf("%s",&us);
		printf("\nENTER PASSWORD:");
		scanf("%s",&p);
		x= strcmp(us,username);
		y= strcmp(p,password);
		if(x==0 && y==0)
		{
			printf("\nSUCCESSFULLY LOGGED IN !!");
			getch();
			break;
		}
		else
		{
			printf("\n INCORRECT username and password!!");
			getch();
			n++;
			
		}
	}while(n<=3);
	
	 if(n>3)
	    {
	    	printf("\n access denied!!");
	    	getch();
	    	exit(0);
		}
}

		
	

