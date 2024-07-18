//view custumer details file
#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
struct CustomerDetails   
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char nationality[15];	
	char email[20];
	char period[10];
	char arrivaldate[10];
} s;
main()
{	int x;
	FILE *fp;
	fp=fopen("cus.dat","r");
	if(fp == NULL)
	{
		printf("Unable to read the file!");
		exit(0);
	}
	x= fread(&s,sizeof(s),1,fp);
	printf("----------------------------------------------------------------------------\n");
	printf("***************************|  CUSTUMER RECORD  |****************************\n");
	printf("----------------------------------------------------------------------------\n\n\n\n\n");
	printf("-------------------------------------------------------------\n");
	printf("Custumer name  =%s\n",s.name);
	printf("-------------------------------------------------------------\n");
	printf("Custumer room no =%s\n",s.roomnumber);
	printf("-------------------------------------------------------------\n");
	printf("Address  =%s\n",s.address);
	printf("-------------------------------------------------------------\n");
	printf("Phone number=%s\n",s.phonenumber);
	printf("-------------------------------------------------------------\n");
	printf("Nationality =%s\n",s.nationality);
	printf("-------------------------------------------------------------\n");
	printf("email =%s\n",s.email);
	printf("-------------------------------------------------------------\n");
	printf("period  =%s\n",s.period);
	printf("-------------------------------------------------------------\n");
	printf("arrivaldate  =%s\n",s.arrivaldate);
	printf("-------------------------------------------------------------\n\n\n\n\n\n");
	
	
	
	
	
	printf("----------------------------------------------------------------------------\n");
	time_t t;
    time(&t);
	printf("\nCurrent date and time : %s",ctime(&t));
	printf("----------------------------------------------------------------------------\n");
	fclose(fp);
	
}

