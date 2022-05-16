#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

void stockMarket();
void nifty();
void sensex();

    char *smallcap[5]={"Ujjivan Small Fin","Cera Sanitaryware","VST Industries","Sterling and Wilson","BEML"};
    char *midcap[5]={"Oberoi Realty","Tata Chemicals","Alembic Pharma","Torrent Power","Endurance Tech"};
    char *largecap[5]={"Reliance Industries","TCS","HDFC Bank","Infosys","Hindustan Unilever"};
    double smallcapsen[5]={28.75,3856.65,3233.8,301.2,1166.35};
    double smallcapnif[5]={28.75,3844.35,3229.1,301,1167.15};
    double midcapsen[5]={547.45,793,985.45,396.4,1298.2};
    double midcapnif[5]={547.25,792.45,985.7,396.3,1292.45};
    double largecapsen[5]={1994.45,3038.4,1412.2,1353.9,2353.85};
    double largecapnif[5] = {1994.5, 3035.65, 1412.3, 1354.35, 2353.75};

void stockMarket() {


    int i=0,j=0,k=0; char choose;
    ////system("cls");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tSTOCK MARKET SIMULATION");
    printf("\n\n\t\t\tYou have chosen stock market, which is a high risk investment.");
    printf("\n\t\t\tThis section is a simulation of the Sensex and Nifty stock exchange markets with a purpose to understand and analyse the investment.");
    printf("\n\t\t\tPLEASE NOTE, INVESTMENT IN STOCK MARKET MAY LEAD TO A GREAT LOSS IN ONE'S HARD EARNED MONEY.");
    printf("\n");
    printf("\n\t\t\tPerformances of the best stock are given below: \n");
    printf("\n\t\t=======================================SMALL CAP COMPANIES==================================================\n");
    printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
    printf("\n\t\t\tCompany-->NIFTY-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf-->%0.2lf",smallcap[i],smallcapnif[i],smallcapsen[i]);
    }printf("\n");
    printf("\n\t\t=======================================MID CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
    printf("\n\t\t\tCompany-->NIFTY-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf-->%0.2lf",midcap[i],midcapnif[i],midcapsen[i]);
    }printf("\n");
    printf("\n\t\t======================================LARGE CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
    printf("\n\t\t\tCompany-->NIFTY-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf-->%0.2lf",largecap[i],largecapnif[i],largecapsen[i]);
    }printf("\n");
    printf("\n\t\t================================================================================================================\n");
    /* printf("\nDo you want to invest in SM?");
    scanf(); */
    printf("Enter N to enter Nifty Market and S to enter Sensex Market: ");
    fflush(stdin);
    scanf("%c", &choose);
    if(choose=='N'||choose=='n')
        nifty();
    else
        sensex();
}
void nifty() {
//strcpy( smallcap=,"Ujjivan Small Fin","Cera Sanitaryware","VST Industries","Sterling and Wilson","BEML"}) ;
    ////system("cls");
int i = 0, j = 0, k = 0;
char choose;
    printf("\n\t\t\tPerformances of the best stock are given below: \n");
    printf("\n\t\t=======================================SMALL CAP COMPANIES==================================================\n");
    printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
    printf("\n\t\t\tCompany-->NIFTY");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapnif[i]);
    }printf("\n");
    printf("\n\t\t=======================================MID CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
    printf("\n\t\t\tCompany-->NIFTY");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapnif[i]);
    }printf("\n");
    printf("\n\t\t======================================LARGE CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
    printf("\n\t\t\tCompany-->NIFTY");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapnif[i]);
    }printf("\n");
    printf("\n\t\t================================================================================================================\n");
    printf("\n\t\t\t1. Enter S to invest in Small Cap companies.\n\t\t\t2. Enter M to invest in Mid Cap Company.\n\t\t\t3. Enter L to invest in Large Cap Company.\n");
    fflush(stdin);
    scanf("%c",&choose);
    switch(choose)
    {int num; double price;
    case 'S'||'s':

        {   int choose;int choose1;
            int ch;
            double smallcapprice;

            printf("\n\t\t=======================================SMALL CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
            printf("\n\t\t\tCompany-->NIFTY");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapnif[i]);
            }printf("\n");
            printf("\n\t\t================================================================================================================\n");
            printf("\nEnter 1 to invest in the first stock and so on.\n");
            scanf("%d",&ch);
            if(ch==1)
            {
                smallcapprice=smallcapnif[0];
                printf("\n\t\t\tYou have chosen %s company",smallcap[0]);
            }
            else if(ch==2)
            {
                smallcapprice=smallcapnif[1];
                printf("\n\t\t\tYou have chosen %s company",smallcap[1]);
            }
            else if(ch==3)
            {
                smallcapprice=smallcapnif[2];
                printf("\n\t\t\tYou have chosen %s company",smallcap[2]);
            }
            else if(ch==4)
            {
                smallcapprice=smallcapnif[3];
                printf("\n\t\t\tYou have chosen %s company",smallcap[3]);
            }
            else if(ch==5)
            {
                smallcapprice=smallcapnif[4];
                printf("\n\t\t\tYou have chosen %s company",smallcap[4]);
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("Press 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }
            printf("\n\t\t\tEnter number of shares you want to purchase: \n");
            scanf("%d",&num);
            price=smallcapprice*num;
            printf("\n\t\t\tCost Price= %0.2lf", price);

            printf("\n\t\t\tPress 1 to confirm purchase and 2 to decline");
                fflush(stdin);
                scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                //q.y_sav-=price;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");\
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }

        }break;
    case 'M':
        {
      double midcapprice;int choose;
      int ch;
            ////system("cls");
            printf("\n\t\t========================================MID CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
            printf("\n\t\t\tCompany-->NIFTY");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapnif[i]);
            }printf("\n");
            printf("\n\t\t================================================================================================================\n");
            printf("\nEnter 1 to invest in the first stock and so on.\n");
            fflush(stdin);
            scanf("%d",&ch);
            if(ch==1)
            {
                midcapprice=midcapnif[0];
                printf("\n\t\t\tYou have chosen %s company",midcap[0]);
            }
            else if(ch==2)
            {
                midcapprice=midcapnif[1];
                printf("\n\t\t\tYou have chosen %s company",midcap[1]);
            }
            else if(ch==3)
            {
                midcapprice=midcapnif[2];
                printf("\n\t\t\tYou have chosen %s company",midcap[2]);
            }
            else if(ch==4)
            {
                midcapprice=midcapnif[3];
                printf("\n\t\t\tYou have chosen %s company",midcap[3]);
            }
            else if(ch==5)
            {
                midcapprice=midcapnif[4];
                printf("\n\t\t\tYou have chosen %s company",midcap[4]);
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("Press 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }
            printf("\n\t\t\tEnter number of shares you want to purchase: \n");
            scanf("%d",&num);
            price=midcapprice*num;
            printf("\n\t\t\tCost Price= %0.2lf",price);

            printf("\n\t\t\tPress 1 to confirm purchase and 2 to decline");
            scanf("%d",&choose);
            if(choose==1)
            {
                printf("\n\t\t\tStock purchased!!");
                //q.y_sav-=price;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }

        }break;
        case 'L':
        { char choose; int choose1;
          double largecapprice;
          int ch;
            ////system("cls");
            printf("\n\t\t======================================LARGE CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
            printf("\n\t\t\tCompany-->NIFTY");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapnif[i]);
            }printf("\n");
            printf("\n\t\t================================================================================================================\n");
            printf("\n\t\t\tEnter 1 to invest in the first stock and so on.\n");
            scanf("%d",&ch);
            if(ch==1)
            {
                largecapprice=largecapnif[0];
                printf("\n\t\t\tYou have chosen %s company",largecap[0]);
            }
            else if(ch==2)
            {
                largecapprice=largecapnif[1];
                printf("\n\t\t\tYou have chosen %s company",largecap[1]);
            }
            else if(ch==3)
            {
                largecapprice=largecapnif[2];
                printf("\n\t\t\tYou have chosen %s company",largecap[2]);
            }
            else if(ch==4)
            {
                largecapprice=largecapnif[3];
                printf("\n\t\t\tYou have chosen %s company",largecap[3]);
            }
            else if(ch==5)
            {
                largecapprice=largecapnif[4];
                printf("\n\t\t\tYou have chosen %s company",largecap[4]);
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }
            printf("\n\t\t\tEnter number of shares you want to purchase: \n");
            scanf("%d",&num);
            price=largecapprice*num;
            printf("\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\t\t\tPress 1 to confirm purchase and 2 to decline");
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                //q.y_sav-=price;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress N to retry in Nifty Market again, S to go back to the Stock Market Secion and H to go back to homepage");
                if(choose=='N')
                    nifty();
                else if(choose=='S')
                    stockMarket();
                else
                    exit(0);
            }

        }break;
        default:
            printf("INVALID CHOICE");
    }

}

void sensex()
{char choose;

    //system("cls");
    int i=0,j=0,k=0;
    printf("\n\t\t\tPerformances of the best stock are given below: \n");
    printf("\n\t\t=======================================SMALL CAP COMPANIES==================================================\n");
    printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
    printf("\n\t\t\tCompany-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapsen[i]);
    }printf("\n");
    printf("\n\t\t=======================================MID CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
    printf("\n\t\t\tCompany-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapsen[i]);
    }printf("\n");
    printf("\n\t\t======================================LARGE CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
    printf("\n\t\t\tCompany-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapsen[i]);
    }printf("\n");
    printf("\n\t\t================================================================================================================\n");
    printf("\n\t\t\t1. Enter S to invest in Small Cap companies.\n\t\t\t2. Enter M to invest in Mid Cap Company.\n\t\t\t3. Enter L to invest in Large Cap Company.\n");

                fflush(stdin);
                scanf("%c",&choose);
    switch(choose)
    {
    case 'S'||'s':
        { char choose;int choose1;
            int ch;
            double smallcapprice,price;
            int num;
            printf("\n\t\t=======================================SMALL CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
            printf("\n\t\t\tCompany-->SENSEX");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapsen[i]);
            }printf("\n");
            printf("\n\t\t================================================================================================================\n");
            printf("\nEnter 1 to invest in the first stock and so on.\n");
            scanf("%d",&ch);
            if(ch==1)
            {
                smallcapprice=smallcapsen[0];
                printf("\n\t\t\tYou have chosen %s company",smallcap[0]);
            }
            else if(ch==2)
            {
                smallcapprice=smallcapsen[1];
                printf("\n\t\t\tYou have chosen %s company",smallcap[1]);
            }
            else if(ch==3)
            {
                smallcapprice=smallcapsen[2];
                printf("\n\t\t\tYou have chosen %s company",smallcap[2]);
            }
            else if(ch==4)
            {
                smallcapprice=smallcapsen[3];
                printf("\n\t\t\tYou have chosen %s company",smallcap[3]);
            }
            else if(ch==5)
            {
                smallcapprice=smallcapsen[4];
                printf("\n\t\t\tYou have chosen %s company",smallcap[4]);
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");;
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }
            printf("\n\t\t\tEnter number of shares you want to purchase: \n");
            scanf("%d",&num);
            price=smallcapprice*num;
            printf("\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\t\t\tPress 1 to confirm purchase and 2 to decline");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                //q.y_sav-=price;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("Press N to retry in Nifty Market again, S to go back to the Stock Market Secion and H to go back to homepage");
                if(choose=='N')
                    nifty();
                else if(choose=='S')
                    stockMarket();
                else
                    exit(0);
            }

        }break;
    case 'M':
        {   int ch,num;
      double midcapprice, price;
      char choose;int choose1;

            ////system("cls");
            printf("\n\t\t========================================MID CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
            printf("\n\t\t\tCompany-->SENSEX");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapsen[i]);
            }printf("\n");
            printf("\n\t\t================================================================================================================\n");
            printf("\nEnter 1 to invest in the first stock and so on.\n");
            scanf("%d",&ch);
            if(ch==1)
            {
                midcapprice=midcapsen[0];
                printf("\n\t\t\tYou have chosen %s company",midcap[0]);
            }
            else if(ch==2)
            {
                midcapprice=midcapsen[1];
                printf("\n\t\t\tYou have chosen %s company",midcap[1]);
            }
            else if(ch==3)
            {
                midcapprice=midcapsen[2];
                printf("\n\t\t\tYou have chosen %s company",midcap[2]);
            }
            else if(ch==4)
            {
                midcapprice=midcapsen[3];
                printf("\n\t\t\tYou have chosen %s company",midcap[3]);
            }
            else if(ch==5)
            {
                midcapprice=midcapsen[4];
                printf("\n\t\t\tYou have chosen %s company",midcap[4]);
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }
            printf("\n\t\t\tEnter number of shares you want to purchase: \n");
            scanf("%d",&num);
            price=midcapprice*num;
            printf("\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\t\t\tPress 1 to confirm purchase and 2 to decline");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                //q.y_sav-=price;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("Press 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }

        }break;
        case 'L': {
          int ch, num;
          double price;int choose1;
            double largecapprice;
            //system("cls");
            printf("\n\t\t======================================LARGE CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
            printf("\n\t\t\tCompany-->SENSEX");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapsen[i]);
            }printf("\n");
            printf("\n\t\t================================================================================================================\n");
            printf("\nEnter 1 to invest in the first stock and so on.\n");
            scanf("%d",&ch);
            if(ch==1)
            {
                largecapprice=largecapsen[0];
                printf("\n\t\t\tYou have chosen %s company",largecap[0]);
            }
            else if(ch==2)
            {
                largecapprice=largecapsen[1];
                printf("\n\t\t\tYou have chosen %s company",largecap[1]);
            }
            else if(ch==3)
            {
                largecapprice=largecapsen[2];
                printf("\n\t\t\tYou have chosen %s company",largecap[2]);
            }
            else if(ch==4)
            {
                largecapprice=largecapsen[3];
                printf("\n\t\t\tYou have chosen %s company",largecap[3]);
            }
            else if(ch==5)
            {
                largecapprice=largecapsen[4];
                printf("\n\t\t\tYou have chosen %s company",largecap[4]);
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("Press 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    exit(0);
            }
            printf("\n\t\t\tEnter number of shares you want to purchase: \n");
            scanf("%d",&num);
            price=largecapprice*num;
            printf("\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\t\t\tPress 1 to confirm purchase and 2 to decline");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                //q.y_sav-=price;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("Press N to retry in Nifty Market again, S to go back to the Stock Market Secion and H to go back to homepage");
                if(choose=='N')
                    nifty();
                else if(choose=='S')
                    stockMarket();
                else
                    exit(0);

            }

        }break;
        default:
            printf("INVALID CHOICE");
    }

}

int main(void)
{
    stockMarket();
}
