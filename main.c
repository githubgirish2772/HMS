#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "splash.h"
#include "login.h"

void login();
void splash();
void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();

void setcolor(int ForgC)
{ 
	WORD wColor;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	
	if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
	{
		wColor=(csbi.wAttributes & 0xB0)+(ForgC & 0x0B);
	//	SetConsoleTextAttributes(hStdOut,wColor);
		SetConsoleTextAttribute(hStdOut,wColor);
	}
}

struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];	
	char email[20];
	char period[10];
	char arrivaldate[10];
}s;

int main(){     // MAIN FUNCTION	
	int i=0;
	time_t t;
	time(&t);
	
	char choice;

	system("cls");   // FOR CLEARING SCREEN
	setcolor(15);
	splash();
    system("cls");
    
    login();
    system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		setcolor(10);
		for(i=0;i<80;i++)
			printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		
		getche();
		break;
	}
}
