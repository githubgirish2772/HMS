#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

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

void add()
{
	
	int i,x;
	while ((getchar()) != '\n'); //this is to flush the input stream
	
	FILE *fp;
	fp=fopen("cus.dat","a");
	if(fp == NULL)
	{
		printf("Unable to read the file!");
		exit(0);
	}
	
	do
	{
		system("cls");
		
		for(i=0;i<80;i++)
			printf("-");
		printf("\n");
		printf("   ******************************  |CUSTOMER ENTRY FORM|  ***************************** \n");
		printf("--------------------------------------------------------------------------------\n ");
		printf("                      *please press [Enter] to continue and [Esc] for Main Menu*:\n\n\n");
		
		printf("Enter room no: ");
		gets(s.roomnumber);
		
		printf("Enter name: ");
		gets(s.name);
		
		printf("Enter address: ");
		gets(s.address);
		
		printf("Enter phone no: ");
		gets(s.phonenumber);
		
		printf("Enter nationality: ");
		gets(s.nationality);
		
		printf("Enter email: ");
		gets(s.email);
		
		printf("Enter period: ");
		gets(s.period);
		
		printf("Enter arrivaldate: ");
		gets(s.arrivaldate);
		
		x = fwrite(&s,sizeof(s),1,fp);
		printf("Record Added Successfully!\n");		
	}
	while((getche()) != 27);
	
	fclose(fp);
}
