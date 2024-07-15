#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

void login()
{
	char username[]="admin";
	char password[]="admin";
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
			break;
		}
	    if(n>3)
	    {
	    	printf("\n access denied!!");
	    	getch();
	    	break;
		}
	}while(n<=3);
}

		
	

