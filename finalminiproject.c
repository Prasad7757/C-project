#include<stdio.h>
#include<string.h>
typedef struct date             //structure within structure(Has a realtionship) 
{
	int day;
	int month;
	int year;
}date;
typedef struct time
{
	int hr;
	int min;
	int sec;
	char tc[5];//TC=Time convention
}time;
typedef struct cricket
{
	int Jno;
	char place[25];
	char name[25];
	int ODI;
	int T20;
	int IPL;
	int max;
	int runs;
	int balls;
	int age;
	int career;
	float str;
	date dob;
	date doj;
	date doc;	
}cricket;
typedef struct matches
{
	char team[25];
	char loc[25];
	time tom;
	date dom;
}match;
void storedata(cricket*,int);
void displaydata(cricket*,int);
void displayscore(cricket*,int);
void maxruns(cricket*,int);
void chopl(cricket*,int);
void maxstr(cricket*,int);
void main()
{
	int ch,p;
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("************************************************************\n");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2*** WELCOME TO *** \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n   ***BOARD OF CONTROL FOR CRICKET IN INDIA(BCCI)***\n");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n************************************************************\n");
	printf("\n============================================================\n");
    cricket c1[p];
    
	printf("\nEnter Number of players you want to Enter in BCCI:");
	scanf("%d",&p);
   do
   {
   	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n************************************************************\n");
   	printf("\n***MENU:");
   	printf("\n************************************************************\n");
	printf("\n>1.ABOUT US:\n>2.ADD PLAYERS:\n>3.PLAYERS PERSONAL INFO:\n>4.SCOREBOARD:\n>5.MAX RUNS:\n>6.CHOOSE PLAYER:\n>7.MAX STRIKERATE:\n>8.UPCOMING MATCHES:\n>9.CONTACT US:\n>10.EXIT\n");
   	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n******
	  ******************************************************\n");
	scanf("%d",&ch);
   switch(ch)
   {
   		case 1: printf("\n\t\t*****1.ABOUT US:*****");
				printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
		   		printf("\n*HISTORY:\n");
    			printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
				printf("\n>In December 1928, the BCCI was formed.");
				printf("\n............................................................");
				printf("\n>1983 Cricket World Cup and 1987 Cricket World Cup");
				printf("\n............................................................");
				printf("\n>2008 BCCI launched its cricket league IPL ");
				printf("\n............................................................");
				printf("\n>Around 1999,Mohammad Azharuddin did match-fixing");
				printf("\n............................................................");
				printf("\n>On 9 August 2019, the BCCI agreed to adhere to the anti-dop\ning mechanisms governed by the National Anti-Doping Agency\n");
				printf("************************************************************\n");
				printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
				printf("\n*DOMESTIC CRICKET:\n");
				printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
				printf("\n1.Men's Domestic Cricket:");
				printf("\n************************************************************");
				printf("\n*Ranji Trophy");
				printf("\n*Duleep Trophy");
				printf("\n*Indian Premier League");
				printf("\n*Vijay Hazare Trophy");
				printf("\n*Irani Cup");
				printf("\n*BCCI Corporate Trophy\n");
				printf("\n************************************************************");
				printf("\n2.Women's Domestic Cricket:");
				printf("\n************************************************************");
				printf("\n*Women's Senior One Day Trophy");
				printf("\n*Senior Women's T20 League");
				printf("\n*Senior Women's Challenger Trophy");
				printf("\n*Senior Women's T20 Challenger Cup");
				printf("\n*Women's T20 Challenge\n");
				printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
				printf("\n*AFFILIATED MEMBERS:\n");
				printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
				printf("\nFollowing are the state boards, regional bodies, government \nof India institutions affiliated to the BCCI.\n");
				printf("\n1)Andhra Cricket Association");
				printf("\n2)Arunachal Pradesh Cricket Association");
				printf("\n3)Assam Cricket Association");
				printf("\n4)Baroda Cricket Association");
				printf("\n5)Kerala Cricket Association");
				printf("\n6)Karnataka Cricket Association");
				printf("\n7)Maharashtra Cricket Association");
				printf("\n8)Punjab Cricket Association");
				printf("\n9)Railways Sports Promotion Board");
				printf("\netc******\n");
				printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				printf("************************************************************\n");
				break;
   		case 2:storedata(c1,p);
   			   break;
   		case 3:displaydata(c1,p);
   		       break;
   		case 4:displayscore(c1,p);
   			   break;
   		case 5:maxruns(c1,p);
   			   break;
   		case 6:chopl(c1,p);
   			   break;
   		case 7:maxstr(c1,p);
   			   break;
   		case 8:printf("\n\t\t***8.UPCOMING MATCHES:***\n");
				   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				   printf("************************************************************\n");
				   match m1,m2,m3,m4;
				   strcpy(m1.team,"IND vs PAK");
				   strcpy(m1.loc,"Dubai I S");
				   m1.dom.day=28;
				   m1.dom.month=8;
				   m1.dom.year=2022;
				   m1.tom.hr=7;
				   m1.tom.min=30;
				   m1.tom.sec=0;
				   strcpy(m1.tom.tc,"PM");
				   
				   strcpy(m2.team,"IND vs Hongk");
				   strcpy(m2.loc,"Dubai I S");
				   m2.dom.day=31;
				   m2.dom.month=8;
				   m2.dom.year=2022;
				   m2.tom.hr=7;
				   m2.tom.min=30;
				   m2.tom.sec=0;
				   strcpy(m2.tom.tc,"PM");
				   
				   strcpy(m3.team,"IND vs PAK");
				   strcpy(m3.loc,"Dubai I S");
				   m3.dom.day=4;
				   m3.dom.month=9;
				   m3.dom.year=2022;
				   m3.tom.hr=7;
				   m3.tom.min=30;
				   m3.tom.sec=0;
				   strcpy(m3.tom.tc,"PM");
				   
				   strcpy(m4.team,"IND vs AUS");
				   strcpy(m4.loc,"Punjab CAS");
				   m4.dom.day=20;
				   m4.dom.month=9;
				   m4.dom.year=2022;
				   m4.tom.hr=7;
				   m4.tom.min=30;
				   m4.tom.sec=0;
				   strcpy(m4.tom.tc,"PM");
				   
				   printf("\nTeams\t\tLocation\tDate\t\tTime\n");
				   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				   printf("************************************************************\n");
				   printf("\n%s\t%s\t%d/%d/%d\t%d:%d:%d %s\n",m1.team,m1.loc,m1.dom.day,m1.dom.month,m1.dom.year,m1.tom.hr,m1.tom.min,m1.tom.sec,m1.tom.tc);				   
				   printf("\n%s\t%s\t%d/%d/%d\t%d:%d:%d %s\n",m2.team,m2.loc,m2.dom.day,m2.dom.month,m2.dom.year,m2.tom.hr,m2.tom.min,m2.tom.sec,m2.tom.tc);
				   printf("\n%s\t%s\t%d/%d/%d\t%d:%d:%d %s\n",m3.team,m3.loc,m3.dom.day,m3.dom.month,m3.dom.year,m3.tom.hr,m3.tom.min,m3.tom.sec,m3.tom.tc);
				   printf("\n%s\t%s\t%d/%d/%d\t%d:%d:%d %s\n",m4.team,m4.loc,m4.dom.day,m4.dom.month,m4.dom.year,m4.tom.hr,m4.tom.min,m4.tom.sec,m4.tom.tc);
				   break;
		case 9:	   printf("\n\t\t*****9.CONTACT US:*****\n");
				   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				   printf("************************************************************");
				   printf("\nSr.No.\tCategory\t\tContact No.\n");
				   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				   printf("************************************************************");
				   printf("\n1.\tFor Queries\t\t02222898800");
				   printf("\n2.\tAnti-doping Helpline\t9136694499");
				   printf("\n3.\tAnti-doping Helpline\t9820556566");
				   printf("\n4.\tACU Helpline\t\t7506003000 ");
				   printf("\n5.\tFor Queries\t\toffice@bcci.tv");
				   printf("\n6.\tFor Other Queries\tinfo@bcci.tv");
				   printf("\n7.\tConfidential mail\tintegrity@bcci.tv\n");
				   break;
		case 10:   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				   printf("************************************************************");
			       printf("\n\t\t***THANK YOU SO MUCH***");
				   printf("\n\t\t      visit again");
				   printf("\n");
				   printf("\n\t     This project is powered by");
				   printf("\n\t***FIRSTBITSOLUTION INSTITUTE PUNE***");
				   printf("\n\t    contact@firstbitsolutions.com\n");
				   printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				   printf("************************************************************\n");
				   break;
   }
	
}while(ch!=10);
}
void storedata(cricket*c1,int t)//array of structure veriable
{
				printf("\n\t*****2.PLEASE ENTER PLAYERS DETAILS:*****\n");
				printf("************************************************************");
				int i;
				for(i=0;i<t;i++)
				{
					printf("\nEnter Player Name %d:",i+1);
					scanf("%s",&c1[i].name);
					printf("\nEnter Player Jno %d:",i+1);
					scanf("%d",&c1[i].Jno);
					printf("\nEnter BirthDay of Player%d:",i+1);
					scanf("%d",&c1[i].dob.day);
					printf("\nEnter BirthMonth of Player%d:",i+1);
					scanf("%d",&c1[i].dob.month);
					printf("\nEnter BirthYear of Player%d:",i+1);
					scanf("%d",&c1[i].dob.year);
					printf("\nEnter BCCI Joining Year of Player%d:",i+1);
					scanf("%d",&c1[i].doj.year);
					c1[i].doc.year=2022;
					printf("\nEnter ODI runs of Player%d:",i+1);
					scanf("\n%d",&c1[i].ODI);
					printf("\nEnter T20 runs of Player%d:",i+1);
					scanf("\n%d",&c1[i].T20);
					printf("\nEnter IPL runs of Player%d:",i+1);
					scanf("\n%d",&c1[i].IPL);
					printf("\nEnter Total Balls he Played%d:",i+1);
					scanf("\n%d",&c1[i].balls);
					printf("\nEnter Players Birth Place%d:",i+1);
					scanf("%s",&c1[i].place);
					c1[i].runs=c1[i].ODI+c1[i].T20+c1[i].IPL;
					c1[i].str=((c1[i].runs)/(c1[i].balls))*100;
					c1[i].age=c1[i].doc.year-c1[i].dob.year;
					c1[i].career=(c1[i].doc.year)-(c1[i].doj.year);
					printf("\nThanks!!!\nPlayers Information has been Recorded!!!\n");
	}
}
void displaydata(cricket*c1,int t)
{
					int i;
					printf("\n\t\t*****3.PLAYERS INFORMATION*****");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					printf("\nJno\tNAME\tBIRTHDATE\tBIRTHPLACE\tAGE\tCAREER");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					for(i=0;i<t;i++)
					{
						printf("\n%d\t%s\t%d/%d/%d\t%s\t\t%d\t%d\n",c1[i].Jno,c1[i].name,c1[i].dob.day,c1[i].dob.month,c1[i].dob.year,c1[i].place,c1[i].age,c1[i].career);
						
					}
}
void displayscore(cricket*c1,int t)
{
					int i;
					printf("\n\t\t***4.PLAYERS SCORECARD***");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					printf("\nJno\tNAME\tODI\tT20\tIPL\tTRUNS\tBALLS\tSTR");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					for(i=0;i<t;i++)
					{
						printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%f\n",c1[i].Jno,c1[i].name,c1[i].ODI,c1[i].T20,c1[i].IPL,c1[i].runs,c1[i].balls,c1[i].str);
					}
	
}
void maxruns(cricket*c1,int t)
{
					int i,max=0,max1=0,max2=0;
					char n1[20];
					char n2[20];
					char n3[20];
					int j1,j2,j3;
					for(i=0;i<t;i++)
					{
						if(c1[i].ODI>max)
						{
							max=c1[i].ODI;
							strcpy(n1,c1[i].name);
							j1=c1[i].Jno;
						}
					}
					for(i=0;i<t;i++)
					{
						if(c1[i].T20>max1)
						{
							max1=c1[i].T20;
							strcpy(n2,c1[i].name);
							j2=c1[i].Jno;
						}
					}
					for(i=0;i<t;i++)
					{
						if(c1[i].IPL>max2)
						{
							max2=c1[i].IPL;
							strcpy(n3,c1[i].name);
							j3=c1[i].Jno;
						}
					}
					printf("\n\t\t*****5.MAXIMUM RUNS*****");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					printf("\n\tMATCH TYPE\tRUNS\tPLAYER NAME\tJ.NO");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					printf("\n\tODI\t\t%d\t%s\t\t%d",max,n1,j1);
					printf("\n\tT20\t\t%d\t%s\t\t%d",max1,n2,j2);
					printf("\n\tIPL\t\t%d\t%s\t\t%d",max2,n3,j3);
					printf("\n");
				}
void chopl(cricket*c1,int t)
{					int i,J;
					int flag=0;
					printf("Enter the Players Jersey number to see his details\n");
             		scanf("%d",&J);
             		printf("\nJno\tNAME\tODI\tT20\tIPL\tTRUNS\tBALLS\tSTR");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
				    for(i=0;i<t;i++)
				    {
				    	if(c1[i].Jno==J)
				    	{
						  flag=1;
						  break;
						}
					}
					if(flag==1)
					{
						printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%f\n",c1[i].Jno,c1[i].name,c1[i].ODI,c1[i].T20,c1[i].IPL,c1[i].runs,c1[i].balls,c1[i].str);
					}
					else
					{
						printf("\nInvalid Jersey Number\n"); 
					}
}
void maxstr(cricket*c1,int t)
{
					int i,ms=0;
					int j1;
					char n[20];
					for(i=0;i<t;i++)
					{
						if(c1[i].str>ms)
						{
							ms=c1[i].str;
							strcpy(n,c1[i].name);
							j1=c1[i].Jno;
						}
					}
					printf("\n\t\t*****7.MAXIMUM STRIKERATE*****");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
				    printf("\n\tJ.NO\tPLAYER NAME\tSTRIKE RATE");
					printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
				    printf("\n\t%d\t%s\t\t%d\n",j1,n,ms);
				    printf("\n");
				    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
				    printf("************************************************************\n");
					
}

