#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   CHECK YOUR KNOWLEDGE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich type of investment is more suitable for long term investors ?");
		printf("\n\nA.Cash\t\tB.Fixed Interest\n\nC.Growth Investment\t\tD.Defensive Investment");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.Growth Invesment");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nWhat kind of investment is suitable for those who are comfortable withstanding the ups and downs?");
		printf("\n\nA.Property\t\tB.Cash\n\nC.Shares\t\tD.Defensive Investment");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Shares");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhat are shares also known as?");
		printf("\n\nA.Capital\t\tB.Equity\n\nC.Funds\t\tD.Property");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Equity");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWhich type of investment is the riskiest type of investment");
		printf("\n\nA.Fixed Interest\t\tB.Shares\n\nC.Hybrid Investments\t\tD.Debt Investments");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Shares");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich type of investments comes under Growth Investment?");
        printf("\n\nA.Debt Investments\t\tB.Property\n\nC.Defensive Investment\t\tD.Cash");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Property");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat type of investment is more focused on consistently generating income?");
		printf("\n\nA.Cash\t\tB.Fixed Interest\n\nC.Debt Investment\t\tD.Defensive Investment");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Defensive Investment");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhich type of investment is more suitable for long term investors ?");
		printf("\n\nA.Cash\t\tB.Fixed Interest\n\nC.Growth Investment\t\tD. Defensive Investment");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Growth Investment");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\n What kind of investment is suitable for those who are comfortable withstanding the ups and downs?");
		printf("\n\nA.Shares\t\tB.Property\n\nC.Cash\t\tD.Defensive Investment");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Shares");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n What are shares also known as? ");
		printf("\n\nA.Capital\t\tB.Funds\n\nC.Equity\t\tD.Property");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Equity");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nWhich type of investment is the riskiest type of investment?");
		printf("\n\nA.Shares\t\tB.Fixed Interst\n\nC.Hybrid Investment\t\tD.Debt Investment");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Shares");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nWhich type of investments comes under Growth Investment?");
		printf("\n\nA.Debt Investments\t\tB.Property\n\nC.Defensive Investment\t\tD.Cash");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Property");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhat type of investment is more focued on consistently generating income?");
		printf("\n\nA.Cash\t\tB.Defensive Investment\n\nC.Fixed Interest\t\tD.Debt Investment");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Defensive Investment");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat type of investment has the lowest potential returns?");
		printf("\n\nA.Growth Investment\t\tB.Hybrid Investment\n\nC.Property\t\tD.Cash");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Cash");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nWhat is the best known type of fixed interestinvestments?");
		printf("\n\nA.Share\t\tB.Bonds\n\nC.Equity\t\tD.Cash");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Bonds");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\n Which type of equity investment is often larger-scale investment that is not within the scope of a small investor ?");
		printf("\n\nA.Private Equity Investment\t\tB.Public Equity Investment\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Private Equity Investment");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich type of Equity Investment is a high risk, high reward investment ?");
		printf("\n\nA.Private Equity Investment\t\tB.Public Equity investment \n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
                        break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Private Equity Investment");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat type of Debt Investment generates an asset on the balance sheet and are not openly or easily traded in markets?");
		printf("\n\nA.Private Debt Investment\t\tB.Public Debt Investment\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Private Debt Investment");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich is the most famous Cryptocurrency?");
		printf("\n\nA.BitCoin\t\tB.LiteCoin\n\nC.DogeCoin\t\tD.Ethereum");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.BitCoin");getch();
              break;goto score;}

		case 13:
		printf("\n\n\n Name the digital currency which does not have any kind of government backing ?");
		printf("\n\nA.Central Bank Digital Currency\t\tB.Virtual Currency\n\nC.Cryptocurrency\t\t");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cryptocurrency");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\n Lease transaction is a type of investment.");
		printf("\n\nA.True\t\tB.False\n\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.False");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\n The act of producing goods with the intention of reselling them in the future is a type of investment. ");
		printf("\n\nA.True\t\tB.False\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.True");getch();
		       goto score;
		       break;}


	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");}

void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
