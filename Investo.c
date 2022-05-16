#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include<conio.h>

//* For signup

char username[30], password[30], username1[30], password1[30]; //For Login Signup
int a, c; // FOR LOGIN AND SIGNUP


int choose, ch1; // FOR Homepage1 and ch1 for risk Factors

/* ======================================For Stock Market====================================== */

    char *smallcap[5]={"Ujjivan Small Fin","Cera Sanitaryware","VST Industries","Sterling and Wilson","BEML"};
    char *midcap[5]={"Oberoi Realty","Tata Chemicals","Alembic Pharma","Torrent Power","Endurance Tech"};
    char *largecap[5]={"Reliance Industries","TCS","HDFC Bank","Infosys","Hindustan Unilever"};
    double smallcapsen[5]={28.75,3856.65,3233.8,301.2,1166.35};
    double smallcapnif[5]={28.75,3844.35,3229.1,301,1167.15};
    double midcapsen[5]={547.45,793,985.45,396.4,1298.2};
    double midcapnif[5]={547.25,792.45,985.7,396.3,1292.45};
    double largecapsen[5]={1994.45,3038.4,1412.2,1353.9,2353.85};
    double largecapnif[5] = {1994.5, 3035.65, 1412.3, 1354.35, 2353.75};

/* ============================================================================================= */

    int m=0, n=0, o=0;
    char *nameofinvest[100];
    double invested[100], maturity[100];
    double stockspent=0.0;


void mutualFunds(); //MF
void recurringDeposit(); //RD
void fixedDeposit();// FD
void RiskFactor();  // RISK FACTOR
void Homepage2();   // Homepage2
void Homepage1();   // Homepage1
void Signup();      // Signup
void login();       // Login
void GoBack();      // Go Back
void LowRisk();     // Low Risk
void MediumRisk();  //Medium Risk
void HighRisk();    //High Risk
void MainPage();    //Main Homepage
void GoBackMHP();   //Go back to the Homepage
void stockMarket(); //Stock Market
void nifty();       //Nifty
void sensex();      //Sensex
void read();        //news
void compare(double sav, double inst);    //For comparision
void Bill();        //for printing bill
void elearn(); //e learning
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
void quiz();
void load();


typedef struct Questions {
  double m_inc, m_exp, y_sav;
  int w_w_y_sell,r;
}ques;
ques q;

typedef struct fixedDeposit{
  double maturity, rate, principle;
  int tenure;
} fd;
fd f;

typedef struct recurringDeposit {
  double maturity, rate, installment, compfreq;
  int tenure;
  }rd;
  rd r;

typedef struct PPF{
  double principle, maturity;
} ppf;
ppf p;

typedef struct mutualFunds {
  double maturity, invest, rate;
  int tenure;
}mfunds;
mfunds mf;

int main(void) {
 /*  do{
  Homepage1();
  switch (choose) {
  case 1:
    Signup();
    break;
  case 2:
    login();
    break;
  case 3:
    return 0;
  default:
    {printf("Invalid Input. Please try again.");
    Homepage1();
  }
  return 0;
}
  } while (choose != 3);
      return 0;
} */

do
{
    Homepage1();
  switch (choose) {
  case 1:
    Signup();
    break;
  case 2:
    login();
    break;
  case 3:
    exit (0);
  default:
    {printf("Invalid Input. Please try again.");
    Homepage1();
  }
  return 0;
}}
while(choose!=3);
return 0;
}
  /*Homepage1();
  switch (choose) {
  case 1:
    Signup();
    break;
  case 2:
    login();
    break;
  case 3:
    exit (0);
  default:
    {printf("Invalid Input. Please try again.");
    Homepage1();
  }
  return 0;*/


  void load()
{
    int i;int c, d;
    char load[12]={'L','o','a','d','i','n','g','.','.','.','.','.'};
    system("cls");
    printf("\n");
    for(i=0;i<12;i++)
    {
        printf("%c",load[i]);
        for(c=0;c<100000000;c++){}
    }
    system("cls");
}

/*===================================================PPF===================================================*/

void PPF()
{
  system("cls");
  load();
  char y_n;
    struct PPF p;
    printf("\n\t\t________________________________________________________________________________\n");
    printf("\n\n");
    printf("\n\t\t\t================================================================================\n");
    printf("\n\t\t\tPUBLIC PROVIDENT FUNDS\n");
    printf("\n\t\t\t================================================================================\n");
    printf("\n\n\t\t\tYou have chosen PPF which is a long term investment, as a compulsory lock in period is 15 years.\n\t\t\tRate of PPF as per central government is 7.1 per annum.");
Y_N:

  printf("\n\n\t\t\tDo you want to invest in PPF? (y or n)\t");
    fflush(stdin);
    scanf("%c", &y_n);
    switch (y_n) {
    case 'y': {
printf("\n\n\t\t\tEnter amount you wish to invest per year for the next 15 years:\t");
    scanf("%lf",&p.principle);
    p.maturity=p.principle*((pow((1+0.071),15)-1)/0.071);
    printf("\n\n\t\t\tMaturity amount after 15 years will be %0.2lf",p.maturity);
    printf("\n\n\t\t\tAfter 15 years, you can opt to increase tenure by 5 years.");
    q.y_sav -= p.principle;

    printf("\n\n\t\t\tCurrent savings after investment in PPF:\t%0.2lf\n\n\n\n\n", q.y_sav);getch();
    // !for BILL
    invested[m] = p.principle;
    maturity[n] = p.maturity;
    nameofinvest[o] ="PPF";
    m++;
    n++;
    o++;
    Bill(q.y_sav);
    GoBack();
    break;
    }
      case 'n': {
      GoBack();
      break;
    }
    default:{
      printf("\n\n\t\t\tEnter the appropriate value...");
      goto Y_N;
    }
    }

}


/*===================================================LOGIN===================================================*/

void login() {
  FILE *fp;
  Login:
        load();
  printf("\n\t\t\t------------------------------------------LOGIN------------------------------------------\n");
  printf("\n");
  /* printf("\n###########################################################################################\n###########################################################################################\n"); */
  printf("\n");
  printf("\n\t\t\tEnter Username:\t");
  scanf("%s",username);
  printf("\n\t\t\tEnter password:\t");
  scanf("%s", password);
  fp = fopen("details.txt", "r");
  while ((fscanf(fp, "%s %s", username1, password1)) != EOF) {
   if (strcmp (username, username1)==0 && strcmp (password, password1)==0) // compares the user name and password given by user to the saved data in file.

     {
     printf("\n\n\t\t\tLogin sucessful!\n\n\n");c=1;
     getch();
     break;
   }
}

if (c!=1)
{
    load();
  printf("\n\t\t\tLogin failed...Try again!\n");
  goto Login;
}
fclose(fp);
MainPage();
  }

  /*===================================================SIGNUP===================================================*/

void Signup() {
  SignUp:
      system("cls");
  load();
  Already:
      system("cls");
  printf("\n\t\t\t------------------------------------------SIGN UP------------------------------------------");
  printf("\n");
  printf("\n\t\t\t###########################################################################################\n\t\t\t###########################################################################################\n");
  printf("\n");

  printf("\t\t\tEnter your username:\t");
  scanf("%s", username);

  printf("\n");

  printf("\n\t\t\tEnter your password:\t");
  scanf("%s", password);

  FILE *fp;
  fp = fopen("details.txt", "a+"); // append & read mode
  while ((fscanf(fp, "%s %s", username1, password1)) != EOF) {
    if (strcmp(username, username1) == 0) {
      a = 1;
      break;
      }
   }
   if (a == 1) {
     printf("\n\t\t\tUsername already taken.\n\t\t\tPlease try with different username.");getch();
     goto Already;
   }

   else{
    fprintf(fp, "%s %s \n", username, password);
    printf("\n\n\t\t\tUser sucessfully registered\n\n\n");
    Select:

   fclose(fp);
login();
    }
    }

  /* printf("\n\n\t\t\tSelect:\n\t\t\t1. Signup again\n\t\t\t2. Go to the login page\n\t\t\tEnter your selection:\t");

int choose;
    switch (choose) {
    case 1: {
      goto SignUp;
      break;
    }
    case 2: {
      login();
      break;
    }
       default: {
        printf("\n\n\t\t\tEnter the correct value...\n");
        goto Select;
       }
         }
    */

/*===================================================RECURRING DEPOSIT===================================================*/

void recurringDeposit() {
  int i;
  double invested, interest;
  double teninmon;
  char y_n;
  load();
    //system("cls");
    struct recurringDeposit r;
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tRECURRING DEPOSIT\n\t\t\tYou have chosen recurring deposit which has less return and it is a long term investment.\n\t\t\tRate of Recurring Deposit of these five banks are given below:");
    printf("\n\t\t================================================================================\n");
    printf("\n\t\t\t\tSBI Bank\t\t\t5.4%%\n\t\t\t\tAxis Bank\t\t\t5.5%%\n\t\t\t\tHDFC Bank\t\t\t5.5%%\n\t\t\t\tICICI Bank\t\t\t5.5%%");
    printf("\n\n\t\t================================================================================\n");
    Y_N:
    printf("\n\t\t\tDo you want to invest in RD? (y or n)\t");
    fflush(stdin);
    scanf("%c", &y_n);
    switch (y_n) {
      case 'y': { printf("\n\t\t\tEnter installment amount per month:\t");
        scanf("%lf", &r.installment);
        if (q.y_sav < r.installment) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");
        } else {
             printf("\n\t\t\tAssuming rate of interest to be 5.5...\n");
    r.rate=0.055;
    printf("\n\t\t\t\tEnter tenure for investment:\t");
    scanf("%d",&r.tenure);
		teninmon=(double) r.tenure*12.0;
    interest=(double)r.installment*r.rate*(1.0/12.0)*(teninmon*(teninmon+1)/2.0); invested=r.installment*teninmon;
    printf("\n\t\t\tMaturity amount after %d years will be %0.2lf",r.tenure,(invested+interest));getch();
    q.y_sav -= r.installment * 12;

    printf("\n\n\t\t\tCurrent savings after investment in RD:\t%0.2lf\n\n\n\n\n", q.y_sav);
    Bill(q.y_sav);
    GoBack();
    break;
      }
       case 'n': {
      GoBack();
      break;
    }
    default:{
      printf("\n\n\t\t\tEnter the appropriate value...\n");
      goto Y_N;
    }
        }


}
}
/*===================================================FIXED DEPOSIT===================================================*/

void fixedDeposit() {
  char y_n;
  load();
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tFIXED DEPOSIT\n\t\t\tYou have chosen fixed deposit which has less return and it is a long term investment.\n\t\t\tRate of Fixed Deposit of these five banks are given below:\n");
    printf("\n\t\t================================================================================\n");
    printf("\n\t\t\t\tSBI Bank\t\t\t5.4%%\n\t\t\t\tAxis Bank\t\t\t5.5%%\n\t\t\t\tHDFC Bank\t\t\t5.5%%\n\t\t\t\tICICI Bank\t\t\t5.5%%");
    printf("\n\n\t\t================================================================================\n");
    Y_N:
    printf("\n\t\t\tDo you want to invest in FD? (y or n)\t");
    fflush(stdin);
    scanf("%c", &y_n);
    switch (y_n) {
    case 'y': {
    printf("\n\t\t\tCurrent savings:\t%0.2lf",q.y_sav);
    printf("\n\n\t\t\tEnter principle amount:\t");
    scanf("%lf", &f.principle);
    if (q.y_sav < f.principle) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");
    }
    else {
    printf("\n\t\t\tAssuming rate of interest to be 5.5%%...");
    f.rate=0.055;
    printf("\n\n\t\t\tEnter tenure for investment:\t");
    scanf("%d",&f.tenure);
    f.maturity=f.principle+(f.principle*f.rate*f.tenure);
    printf("\n\t\t\tMaturity amount after %d years will be %0.2lf", f.tenure, f.maturity);
    q.y_sav = q.y_sav - f.principle;

    // !for BILL
    invested[m] = f.principle;
    maturity[n] = f.maturity;
    nameofinvest[o] ="Fixed Deposit";
    m++;
    n++;
    o++;
    printf("\n\n\t\t\tCurrent savings after investment in FD:\t%0.2lf\n\n\n\n\n",q.y_sav);getch();
    for(c=0;c<100000000;c++){}
       Bill(q.y_sav);

    /* Ask user if he wants to invest in FD, he wants to invest in something
     * else or he wants to go back to the home page */
    GoBack();

    break;
    }
    case 'n': {
      GoBack();
      break;
    }
    default:{
      printf("\n\n\t\t\tEnter the appropriate value...\n");
      goto Y_N;
    }


}
    }
}
/*===================================================MUTUAL FUNDS===================================================*/

void mutualFunds()
{
  int ch, ch1;
  char y_n;
  load();
    //system("cls");
    printf("\n\t\t____________________________________________________________________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tMUTUAL FUNDS\n\n\t\t\tYou have chosen Mutual Funds which has a moderate to high risk.\n\t\t\tThere are two methods to invest.");
    printf("\n\t\t\tThere are thee types of Mutual funds:\n\t\t\t\t1. Equity Funds (high risk)\n\t\t\t\t2. Tax Savings\n\t\t\t\t3. Hybrid\n\t\t\t\t4. Debt(low risk)");
    printf("\n\n\t\t\tPerformances of the best mutual funds are given below:");
    printf("\n\n\t\t===============================================================EQUITY FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\t\tRisk\t\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\t\tHigh\t\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===============================================================DEBT FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\t\t\t\tRisk\t\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\t\t\t\t\tModerate\t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income - Reg\t\t\t\t\t\t\tHigh\t\t\t\t13.50%%");
    printf("\n\n\t\t===============================================================HYBRID FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t============================================================================================================================================\n");
    Y_N:
    printf("\n\t\t\tDo you want to invest in Mutual Funds? (y or n)\t");
    fflush(stdin);
    scanf("%c", &y_n);
    switch (y_n) {
    case 'y': {printf("\n\n\t\t\tThere are two ways to invest in these mutual funds:");
    printf("\n\n\t\t\t\t1. Lump-sum Investment: the depositor invests a significant sum of money on a particular mutual fund scheme.");
    printf("\n\t\t\t\t2. SIP or Systematic Investment Plan, on the other hand, entails the investment of smaller amounts on a monthly basis.");
    Select:
    printf("\n\n\t\t\tEnter 1 to invest in Lump-Sum.\n\t\t\tEnter 2 to invest in SIP.\n\n\t\t\tEnter your selection:\t");
    fflush (stdin);
    scanf("%d",&ch);
    switch(ch)
    {
    case 1: {
        load();
        Start1:
    system("cls");
    printf("\n\t\t____________________________________________________________________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tMUTUAL FUNDS\n\n\t\t\tYou have chosen Mutual Funds which has a moderate to high risk.\n\t\t\tThere are two methods to invest.");
    printf("\n\t\t\tThere are thee types of Mutual funds:\n\t\t\t\t1. Equity Funds (high risk)\n\t\t\t\t2. Tax Savings\n\t\t\t\t3. Hybrid\n\t\t\t\t4. Debt(low risk)");
    printf("\n\n\t\t\tPerformances of the best mutual funds are given below:");
    printf("\n\n\t\t===============================================================EQUITY FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\t\tRisk\t\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\t\tHigh\t\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===============================================================DEBT FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\t\t\t\tRisk\t\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\t\t\t\t\tModerate\t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\t\t\t\t\tHigh\t\t\t\t13.50%%");
    printf("\n\n\t\t===============================================================HYBRID FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t============================================================================================================================================\n");
            printf("\n\t\t\tEnter Amount you wish to invest:\t");
            scanf("%lf", &mf.invest);

            if (q.y_sav < mf.invest) {
            printf("\n\n\t\t\tYour savings account has less money than your investment");
            }
            else {
            printf("\n\t\t\tEnter expected rate of interest per compounded year: ");
            scanf("%lf",&mf.rate);

            if(mf.rate<1.0 && mf.rate>14.0)
            {
                printf("\n\n\t\t\tInvalid Inputs!");getch();
                goto Start1;
            }
            else{
                    mf.rate/=100;
            printf("\n\n\t\t\tEnter number of years you want to invest for:\t");
            scanf("%d",&mf.tenure);
            mf.maturity=mf.invest*pow((1+mf.rate),mf.tenure);
            q.y_sav -= mf.invest;


               // !for BILL
    invested[m] = mf.invest;
    maturity[n] = mf.maturity;
    nameofinvest[o] ="Mutual Fund (Lump - Sum)";
    m++;
    n++;
    o++;
     printf("\n\n\t\t\tSavings in your account left:\t%0.2lf",q.y_sav);
            Bill(q.y_sav);

            printf("\n\n\t\t\tMaturity amount after %d years will be %0.2lf",mf.tenure,mf.maturity);
            getch();
            GoBack();

            }}break;

    }

    case 2: {
      int turns;
      double monthrate;
      load();
      Start2:
    system("cls");
    printf("\n\t\t____________________________________________________________________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tMUTUAL FUNDS\n\n\t\t\tYou have chosen Mutual Funds which has a moderate to high risk.\n\t\t\tThere are two methods to invest.");
    printf("\n\t\t\tThere are thee types of Mutual funds:\n\t\t\t\t1. Equity Funds (high risk)\n\t\t\t\t2. Tax Savings\n\t\t\t\t3. Hybrid\n\t\t\t\t4. Debt(low risk)");
    printf("\n\n\t\t\tPerformances of the best mutual funds are given below:");
    printf("\n\n\t\t===============================================================EQUITY FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\t\tRisk\t\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\t\tHigh\t\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===============================================================DEBT FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\t\t\t\tRisk\t\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\t\t\t\t\tModerate\t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\t\t\t\t\tHigh\t\t\t\t13.50%%");
    printf("\n\n\t\t===============================================================HYBRID FUNDS===============================================================\n");
    printf("\n\t\t\tName of stock\t\t\t\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t============================================================================================================================================\n");

    printf("\n\t\t\tEnter Amount you wish to invest:\t");
    scanf("%lf", &mf.invest);
    if (q.y_sav < mf.invest) {
            printf("\n\n\t\t\tYour savings account has less money than your investment");
    } else {
                  printf("\n\n\t\t\tEnter expected rate of interest per compounded year:\t");
            scanf("%lf",&mf.rate);
             if(mf.rate<1.0 && mf.rate>14.0)
            {
                printf("\n\n\t\t\tInvalid Inputs!");getch();
                goto Start1;
            }
            else{
            mf.rate/=100;
            printf("\n\t\t\tEnter number of years you want to invest for:\t");
            scanf("%d",&mf.tenure);
            turns=mf.tenure*12.0; monthrate=(mf.rate/12.0)/100.0;
            mf.maturity=(double) (mf.invest*((pow((1+monthrate),turns)-1))*(1+monthrate))/monthrate;
            printf("\n\n\t\t\tMaturity amount after %d years will be %0.2lf",mf.tenure,(mf.maturity+mf.invest*turns));
            q.y_sav -= mf.invest;

    // !for BILL
    invested[m] = mf.invest;
    maturity[n] = mf.maturity;
    nameofinvest[o] ="Mutual Fund (SIP)";
    m++;
    n++;
    o++;

     printf("\n\n\t\t\tSavings in your account left:\t%0.2lf",q.y_sav);
     getch();
            Bill(q.y_sav);

            GoBack();
    }} break;

      default:{printf("\n\n\t\t\tEnter the appropriate value...\n");
      goto Select;}
    }
       break;
    }
      case 'n': {
      GoBack();
      break;
    }
    default:{
    printf("\n\n\t\t\t\tEnter the appropriate value...\n");
    goto Y_N;
    }
    }

     }
}

/*===================================================RISK FACTOR===================================================*/

void RiskFactor() {

  Select:
      load();
      Header();
      printf("\n\t\t\t________________________________________________________________________________");
    printf("\n");
    printf("\n\t\t\tLow risk factor include investment in Bank Schemes.\n\t\t\tMedium risk factor include investments in mutual funds.\n\t\t\tHigh risk factor include investments in Share Market.");
    printf("\n\n\t\t\tWhat is the risk factor you are ready to take?");
    printf("\n\t\t\t1.\tLOW RISK FACTOR\n\t\t\t2.\tMODERATE TO HIGH RISK FACTOR\n\t\t\t3.\tHIGH RISK FACTOR\n\t\t\t4.\tGo Back to Homepage\n\n\t\t\tEnter the risk factor that you want to take:\t");
    scanf("%d", &q.r);
    switch (q.r) {
    case 1:{
      LowRisk();
      break;
    }
    case 2: {
      MediumRisk();
      break;
    }
    case 3: {
      HighRisk();
      break;
    }
    case 4: {
      MainPage();
      break;
    }
     default:{
    printf("\n\n\t\t\t\tEnter the appropriate value...\n");
    goto Select;
    }
    }
}

/*===================================================HOMEPAGE2===================================================*/

void Homepage2() {
Ask:
    load();
    Header();
  printf("\n\n\t\t\tHello %s , Welcome to the Investment Plan section of Investo:)",username);
    printf("\n\t\t\t__________________________________________________________________________________________________________________");
    printf("\n");
    printf("\n\t\t\tWhat is your monthly income?\t");
    scanf("%lf", &q.m_inc);
    printf("\n\t\t\tEnter your approximate monthly expenditure:\t");
    scanf("%lf", &q.m_exp);
    if (q.m_inc < q.m_exp) {
      printf("\n\t\t\tJitni Chaddar Ho, utna hi pair failao!;)");
    getch();
      goto Ask;
    }
    else  {
    q.y_sav = (q.m_inc - q.m_exp) * 12;


    printf("\n\t\t\tCurrent savings (yearly):\t %0.2lf\n",q.y_sav);
    getch();

    RiskFactor();
    }

}

/*===================================================HEADER===================================================*/

void Header() {
  FILE *fp;
  char con[1000];
  fp = fopen("heading.txt", "r");
  while (fgets(con,1000, fp)!=NULL)
  printf("%s",con);
}

/*===================================================HOMEPAGE1===================================================*/

void Homepage1() {
  load();
  Header();
  printf("\n\t\t\t------------------------------------------CHOOSE------------------------------------------\n");
  printf("\n");
  printf("\t\t\t1.\tREGISTER\n\t\t\t2.\tLOGIN\n\t\t\t3.\tEXIT\n\n\t\t\tEnter your selection:\t");

  scanf("%d",&choose);
}



/*===================================================GO BACK===================================================*/

void GoBack() {
  // SYSTEM CLS
  load();
  printf("\n\n\n\t\t------------------------------------------GO BACK------------------------------------------\n");
  printf("\n");
  char y_n;
  GoBack:
  printf("\n\t\t\tDo you want to go back to the Risk Factor page?\n\n\t\t\ty. Yes\n\t\t\tn. No (Go back to the Homepage)\n\n\t\t\tEnter your selection:\t");
  fflush(stdin);
  scanf("%c", &y_n);
  switch (y_n) {
  case 'y':
    RiskFactor();
    break;
  case 'n':
    {printf("\n\t\t\tGoing back to homepage...\n\n\n");
    for (int i=0; i<50000; i++) {
    }
    MainPage();
    break;
  default: {
    printf("\n\n\t\tEnter the appropriate value...\t");
    goto GoBack;
    }
    }
  }
}

/*===================================================LOW RISK===================================================*/

void LowRisk() {
  LowRisk:
      load();
      printf("\n\t\t_________________________________________________________________________________\n");
      printf("\n");
      printf("\t\t\t\t\tLOW RISK\n");
      printf("\n\t\t\t1. Fixed Deposit\n\t\t\t2. Public Provident Fund\n\t\t\t3. Recuring Deposit\n\t\t\t4. Go back to Risk Selector\n\n\t\t\tEnter your choice:\t");
      scanf("%d", &ch1);
      switch (ch1){   case 1:
        fixedDeposit();
        break;
      case 2:
        PPF();
        break;
      case 3:
        recurringDeposit();
        break;
      case 4: {
        RiskFactor();
        break;}
      default: {
        printf("\n\t\t\tEnter the correct value...\n");
        goto LowRisk;
        }
}
  }

/*===================================================MEDIUM RISK===================================================*/

  void MediumRisk() {
    MediumRisk:
        load();
      printf("\n\t\t\t_____________________________________________________________________________________________________________\n");
      printf("\n");
      printf("\t\t\t\t\tMODERATE TO HIGH RISK\n");
      printf("\n\t\t\t1. Mutual Funds\n\t\t\t2. Go back to Risk Selector\n\n\t\t\tEnter your choice:\t");
      scanf("%d", &ch1);
      switch (ch1){   case 1:
        {mutualFunds();
        break;
      }
      case 2: {
        RiskFactor();
        break;}
        default: {
        printf("\n\t\t\tEnter the correct value...\n");
        goto MediumRisk;
        }
      }
    }

    /*===================================================MAIN HOMEPAGE===================================================*/

    void MainPage() {
      // system ("cls");
      int ch1;
      MainPage:
          load();
      Header();
      int ch;
      printf("\n\t\t\t____________________________________________________________________________________________________________________________________________\n");
      printf("\n\n\t\t\t===================================================================CHOOSE===================================================================");
      printf("\n");
      printf("\n\n\t\t\t1. News\n\t\t\t2. E-learning Portal\n\t\t\t3. Investment Planning\n\t\t\t4. Bill\n\t\t\t5. Go Back to Signup Login\n\t\t\t6. Exit\n\n\t\t\tEnter your selection:\t");
      fflush(stdin);
      scanf("%d", &ch);
      switch (ch) {
      case 1: {
        read();
        break;
      }
      case 2: {
          elearn();
        break;
      }
      case 3: {
        Homepage2();
        printf("\n\n");
        break;
      }
      case 4: {
          char y_n;
  Read:
      printf("\n\n\t\t\tDo you want to read the Bill?\n\n\t\t\tEnter y/n:\t");
      fflush(stdin);
      scanf("%c", &y_n);
      switch (y_n) {
      case 'y': {
          system("cls");
        FILE *fp; // declaration of file pointer
    char con[100000]; // variable to read the content

    fp =fopen("Bill.txt","r");// opening of file
while (fgets(con,100000, fp)!=NULL)// reading file content
    printf("%s",con);
fclose(fp); // closing file
Ran:
printf("\n\n\t\t\t1. Go Back to Homepage\n\t\t\t2. Exit\n\t\t\tEnter your choice (1 or 2):\t");
fflush(stdin);
scanf("%d",&ch1);
switch(ch1)
{
case 1:
    {
        MainPage();
    }break;
case 2:
    {
        exit(0);
    }break;

default: {printf("\n\n\t\t\tInvalid Input!");getch();
goto Ran;}
}
        break;
      }
      case 'n': {
        printf("\n\n\t\t\tOkay...");
        MainPage();
        break;
      }
      default:
printf("\n\n\t\t\tInvalid choice...");
goto Read;
break;
      }

        break;
      }
      case 5: {
        Homepage1();
        break;}
      case 6: {
        exit(0);
        break;
      }
      default: {
        printf("\n\n\t\t\tEnter the correct value...\n");
        goto MainPage;
        }
      }
    }


    /*===================================================Stock Market===================================================*/

    void stockMarket() {

    int i=0,j=0,k=0; char choose;
    load();
    ////system("cls");
    printf("\n\t\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tSTOCK MARKET SIMULATION");
    printf("\n\n\t\t\tYou have chosen stock market, which is a high risk investment.");
    printf("\n\t\t\tThis section is a simulation of the Sensex and Nifty stock exchange markets with a purpose to understand and analyse the investment.");
    printf("\n\t\t\tPLEASE NOTE, INVESTMENT IN STOCK MARKET MAY LEAD TO A GREAT LOSS IN ONE'S HARD EARNED MONEY.");
    printf("\n");
    printf("\n\t\t\tPerformances of the best stock are given below: \n");
    printf("\n\t\t\t=======================================SMALL CAP COMPANIES==================================================\n");
    printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
    printf("\n\t\t\tCompany-->NIFTY-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf-->%0.2lf",smallcap[i],smallcapnif[i],smallcapsen[i]);
    }printf("\n");
    printf("\n\t\t\t=======================================MID CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
    printf("\n\t\t\tCompany-->NIFTY-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf-->%0.2lf",midcap[i],midcapnif[i],midcapsen[i]);
    }printf("\n");
    printf("\n\t\t\t======================================LARGE CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
    printf("\n\t\t\tCompany-->NIFTY-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf-->%0.2lf",largecap[i],largecapnif[i],largecapsen[i]);
    }printf("\n");
    printf("\n\t\t\t================================================================================================================\n");
    //! Here
    /* printf("\nDo you want to invest in SM?");
    scanf(); */
    GoTo:
    printf("\n\n\t\t\tN. Enter N to enter Nifty Market\n\t\t\tS. Enter S to enter Sensex Market\n\t\t\tG. G to Go Back\n\n\t\t\tEnter your selection:\t");
    fflush(stdin);
    scanf("%c", &choose);
    /* if(choose=='N'||choose=='n')
        nifty();
    else
        sensex(); */
    switch (toupper(choose)) {
    case 'N': {
      nifty();
      break;
    }
      case 'S': {
      sensex();
      break;
      }
      case 'G': {
        GoBack();
        break;
      }
      default: {
        printf("\n\n\t\t\tEnter the appropriate value...");
        goto GoTo;
        }

    }
    }

    void nifty() {
    load();
    ////system("cls");
int i = 0, j = 0, k = 0;
char choose;
    printf("\n\t\t\tPerformances of the best stock are given below: \n");
    printf("\n\t\t\t=======================================SMALL CAP COMPANIES==================================================\n");
    printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
    printf("\n\t\t\tCompany-->NIFTY");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapnif[i]);
    }printf("\n");
    printf("\n\t\t\t=======================================MID CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
    printf("\n\t\t\tCompany-->NIFTY");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapnif[i]);
    }printf("\n");
    printf("\n\t\t\t======================================LARGE CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
    printf("\n\t\t\tCompany-->NIFTY");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapnif[i]);
    }
    printf("\n");
    Nifty:
    printf("\n\t\t\t================================================================================================================\n");
    printf("\n\t\t\tS. Enter S to invest in Small Cap companies.\n\t\t\tM. Enter M to invest in Mid Cap Company.\n\t\t\tL. Enter L to invest in Large Cap Company.\n\t\t\tG. Enter G to Go Back\n\n\t\t\tEnter your slection:\t");
    fflush(stdin);
    scanf("%c",&choose);
    switch (toupper(choose)) {
      int num; double price;
    case 'S':
      SmallCap:
        {
            load();
             int choose;int choose1;
            int ch;
            double smallcapprice;

            printf("\n\t\t\t=======================================SMALL CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
            printf("\n\t\t\tCompany-->NIFTY");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapnif[i]);
            }printf("\n");
            printf("\n\t\t\t================================================================================================================\n");
            printf("\n\t\t\tEnter 1 to invest in the first stock, 2 to invest in the second, and so on....\t");
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
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section, and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if(choose==2)
                    MainPage();
            }
            printf("\n\n\t\t\tEnter number of shares you want to purchase:\t");
            scanf("%d",&num);
            price = smallcapprice * num;
                if (q.y_sav < price) {
                  printf("\n\n\t\t\tYour savings account has less money than "
                         "your investment");
                  goto SmallCap;
      } else {
                  printf("\n\t\t\tCost Price= %0.2lf", price);

            printf("\n\n\t\t\tPress 1 to confirm purchase and 2 to decline:\t");
                fflush(stdin);
                scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!");getch();
                q.y_sav -= price;
                stockspent+=price;

                printf("\n\n\t\t\t Remaining savings:\t%0.2lf",q.y_sav); getch();
                Bill(q.y_sav);

                GoBack();

            } else if (choose1==2) {
              goto SmallCap;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion, and 3 to go back to homepage\t");\
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose == 3)
                  {MainPage();}

            }

                }
      }
        break;
        //* ===========================================Solved===========================================
      case 'M': {
      double midcapprice;int choose; int choose1; int choose2;
      int ch;
      MidCap1:
          load();
            ////system("cls");
            printf("\n\t\t\t========================================MID CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
            printf("\n\t\t\tCompany-->NIFTY");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapnif[i]);
            }printf("\n");
            printf("\n\t\t\t================================================================================================================\n");
            printf("\n\t\t\tEnter 1 to invest in the first stock, 2 to invest in the secod stock, and so on...\t");
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
                printf("\n\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section, and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose==3)
                    stockMarket();
            }
            printf("\n\n\t\t\tEnter number of shares you want to purchase:\t");
            scanf("%d",&num);
            price = midcapprice * num;
             if (q.y_sav < price) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");
goto MidCap1;
      }
             else {
            printf("\n\n\t\t\tCost Price= %0.2lf",price);

            printf("\n\n\t\t\tPress 1 to confirm purchase and 2 to decline:\t");
            scanf("%d", &choose1);

            /* if(choose1==1)
            {
                printf("\n\n\t\t\tStock purchased!");
                q.y_sav -= price;
                printf("\n\n\t\t\tRemaining savings:\t%0.2lf",q.y_sav);
            }
            else if (choose1==2) {
              goto MidCap1;
            }
            else
            {
                printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go
            back to the Stock Market Section and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose==3)
                    MainPage();
            } */


              switch (choose1) {
              case 1: {
                printf("\n\n\t\t\tStock purchased!");
                q.y_sav -= price;
                stockspent+=price;
                Bill(q.y_sav);

                printf("\n\n\t\t\tRemaining savings:\t%0.2lf", q.y_sav);getch();
                GoBack();
                break;
              }
              case 2: {
                goto MidCap1;
                break;
              }
              default: {
                 printf("\n\t\t\tInvalid choice");
                printf("\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section and 3 to go back to homepage");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose==3)
                    MainPage();
                break;
              }
           }
              }
      }
        break;
        case 'L':
        { int choose; int choose1;
          double largecapprice;
          int ch;
          LargeCap:
              load();
            ////system("cls");
            printf("\n\t\t\t======================================LARGE CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
            printf("\n\t\t\tCompany-->NIFTY");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapnif[i]);
            }printf("\n");
            printf("\n\t\t\t================================================================================================================\n");
            printf("\n\t\t\tEnter 1 to invest in the first stock, 2 to invest in the second stock,and so on...\t");
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
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Secion, and 3 to go back to homepage...\t");

                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose==3)
                    MainPage();
            }
            printf("\n\n\t\t\tEnter number of shares you want to purchase:\t");
            scanf("%d",&num);
            price = largecapprice * num;
            if (q.y_sav < price) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");getch();
      goto LargeCap;

      }
            else {printf("\n\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\n\t\t\tPress 1 to confirm purchase and 2 to decline\t");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\n\t\t\tStock purchased!");
                q.y_sav -= price;
                stockspent+=price;
                Bill(q.y_sav);

                printf("\n\n\t\t\t Remaining savings:\t%0.2lf", q.y_sav);getch();
                GoBack();
            }
            else if (choose1==2) {
              goto LargeCap;
            }
            else
            {
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\t\t\t\tPress N to retry in Nifty Market again, S to go back to the Stock Market Section, and H to go back to homepage");
                if(choose=='N')
                    nifty();
                else if(choose=='S')
                    stockMarket();
                else if (choose=='H')
                    MainPage();
            }

        } break;
        case 'G': {
          stockMarket();
          break;}
        default:
          printf("INVALID CHOICE");
          getch();
          goto Nifty;
        }}

    }

    void sensex()
{char choose;
load();

    //system("cls");
    int i=0,j=0,k=0;
    printf("\n\t\t\tPerformances of the best stock are given below: \n");
    printf("\n\t\t\t=======================================SMALL CAP COMPANIES==================================================\n");
    printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
    printf("\n\t\t\tCompany-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapsen[i]);
    }printf("\n");
    printf("\n\t\t\t=======================================MID CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
    printf("\n\t\t\tCompany-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapsen[i]);
    }printf("\n");
    printf("\n\t\t\t======================================LARGE CAP COMPANIES====================================================\n");
    printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
    printf("\n\t\t\tCompany-->SENSEX");
    for(i=0;i<5;i++)
    {
        printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapsen[i]);
    }printf("\n");
    printf("\n\t\t================================================================================================================\n");
    printf("\n\t\t\tS. Enter S to invest in Small Cap companies.\n\t\t\tM. Enter M to invest in Mid Cap Company.\n\t\t\tL. Enter L to invest in Large Cap Company.\n\t\t\tG.Enter G to Go Back.\n\n\t\t\tEnter your slection:\t");

    fflush(stdin);
    scanf("%c",&choose);
    switch(toupper(choose))
    {
    case 'S':
        { int choose;int choose1;
            int ch;
            double smallcapprice,price;
            int num;
            SmallCap:
                load();
            printf("\n\t\t\t=======================================SMALL CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Companies with a market capitalisation less than Rs. 500 Crore are categorised as small-cap companies.");
            printf("\n\t\t\tCompany-->SENSEX");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",smallcap[i],smallcapsen[i]);
            }printf("\n");
            printf("\n\t\t\t================================================================================================================\n");
            printf("\n\t\t\tEnter 1 to invest in the first stock, 2 to invest in the second stock, and so on...\t");
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
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section, and 3 to go back to homepage...\t");;
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose==3)
                    MainPage();
            }
            printf("\n\n\t\t\tEnter number of shares you want to purchase:\t");
            scanf("%d",&num);
            price = smallcapprice * num;
             if (q.y_sav < price) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");
      goto SmallCap;

      } else {
               printf("\n\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\n\t\t\tPress 1 to confirm purchase and 2 to decline\t");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\n\t\t\tStock purchased!");
                 q.y_sav -= price;
                 stockspent+=price;
                 Bill(q.y_sav);

                 printf("\n\n\t\t\t Remaining savings:\t%0.2lf", q.y_sav);getch();
                 GoBack();
            }
            else if (choose1==2) {
              goto SmallCap;
            }
            else
            {
                printf("\n\n\t\t\tInvalid choice");
                printf("Press N to retry in Nifty Market again, S to go back to the Stock Market Section, and H to go back to homepage\t");
                if(choose=='N')
                    nifty();
                else if(choose=='S')
                    stockMarket();
                else if (choose =='H')
                    MainPage();
            }

             }

        }break;
    case 'M':
        {   int ch,num;
      double midcapprice, price;
      int choose;
      int choose1;
      MidCap:
          load();
            ////system("cls");
            printf("\n\t\t\t========================================MID CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Large-cap stocks are shares issued by a company with large market capitalisation.");
            printf("\n\t\t\tCompany-->SENSEX");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",midcap[i],midcapsen[i]);
            }printf("\n");
            printf("\n\t\t\t================================================================================================================\n");
            printf("\n\n\t\t\tEnter 1 to invest in the first stock, 2 to invest in the second stock, and so on...\t");
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
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section, and 3 to go back to homepage\t");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose == 3)
                    MainPage();
            }
            printf("\n\n\t\t\tEnter number of shares you want to purchase:\t");
            scanf("%d",&num);
            price = midcapprice * num;
            if (q.y_sav < price) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");
      goto MidCap;

      } else {
            printf("\n\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\n\t\t\tPress 1 to confirm purchase and 2 to decline\t");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                 q.y_sav -= price;
                 stockspent+=price;
                 Bill(q.y_sav);

                 printf("\n\n\t\t\t Remaining savings:\t%0.2lf", q.y_sav);getch();
                 GoBack();

            }
            else if (choose1==2) {
              goto MidCap;
            }
            else
            {
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section, and 3 to go back to homepage...\t");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else
                    MainPage();
            }
            }


        }break;
        case 'L': {
          int ch, num;
          int choose;
          double price;int choose1;
          double largecapprice;
          LargeCap:
              load();
            //system("cls");
            printf("\n\t\t\t======================================LARGE CAP COMPANIES==================================================\n");
            printf("\n\t\t\tNOTE: Mid-cap is an approximate term that encapsulates companies and stocks which fall in between large-cap and small-cap category.");
            printf("\n\t\t\tCompany-->SENSEX");
            for(i=0;i<5;i++)
            {
                printf("\n\t\t\t%s-->%0.2lf",largecap[i],largecapsen[i]);
            }printf("\n");
            printf("\n\t\t\t================================================================================================================\n");
            printf("\n\t\t\tEnter 1 to invest in the first stock,2 to invest in the second stock, and so on...\t");
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
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\n\t\t\tPress 1 to retry in Nifty Market again, 2 to go back to the Stock Market Section, and 3 to go back to homepage...\t");
                scanf("%d",&choose);
                if(choose==1)
                    nifty();
                else if(choose==2)
                    stockMarket();
                else if (choose ==3)
                    MainPage();
            }
            printf("\n\n\t\t\tEnter number of shares you want to purchase:\t");
            scanf("%d",&num);
            price = largecapprice * num;
            if (q.y_sav < price) {
      printf("\n\n\t\t\tYour savings account has less money than your investment");
      goto LargeCap;
            }
            else
              {
            printf("\n\n\t\t\tCost Price= %0.2lf",price);
            printf("\n\n\t\t\tPress 1 to confirm purchase and 2 to decline\t");
            scanf("%d",&choose1);
            if(choose1==1)
            {
                printf("\n\t\t\tStock purchased!!");
                q.y_sav -= price;
                stockspent+=price;
                Bill(q.y_sav);
                printf("\n\n\t\t\t Remaining savings:\t%0.2lf", q.y_sav);
                GoBack();
            }
            else if (choose1==2) {
              goto LargeCap;
            }
            else
            {
                printf("\n\n\t\t\tInvalid choice");
                printf("\n\n\t\t\tPress N to retry in Nifty Market again, S to go back to the Stock Market Section, and H to go back to homepage...\t");
                if(choose=='N')
                    nifty();
                else if(choose=='S')
                    stockMarket();
                else if (choose =='H')
                    MainPage();

            }}


        }break;
        default:
            printf("\n\n\t\t\tINVALID CHOICE"); MainPage();
    }
    }

    /*===================================================High Risk===================================================*/

    void HighRisk() {
      HighRisk:
          load();
      printf("\n\t\t\t_____________________________________________________________________________________________________________\n");
      printf("\n");
      printf("\t\t\t\t\t\t\tHIGH RISK\n");
      printf("\n\t\t\t1. Stock Market Simulator\n\t\t\t2. Go back to Risk Selector\n\n\t\t\tEnter your choice:\t");
      scanf("%d", &ch1);
      switch (ch1){   case 1:
        {stockMarket();
        break;
      }
      case 2: {
        RiskFactor();
        break;}
        default: {
        printf("\n\t\t\tEnter the correct value...\n");
        goto HighRisk;
        }
      }
      }

      /*===================================================Read===================================================*/

  void read() {
    char y_n;
    int goback;
  Read:
      load();
      printf("\n\t\t\tDo you want to read the news?\n\n\t\t\tEnter y/n:\t");
      fflush(stdin);
      scanf("%c", &y_n);
      switch (y_n) {
      case 'y': {
          system("cls");
        FILE *fp; // declaration of file pointer
    char con[1000]; // variable to read the content

    fp =fopen("news.txt","r");// opening of file
while (fgets(con,1000, fp)!=NULL)// reading file content
    printf("%s",con);
fclose(fp); // closing file
goback:
printf("\n\n\t\t\tEnter 1 to go back to the main homepage...\t");
scanf("%d", &goback);
switch (goback) {
case 1: {
  MainPage();
  break;
}
default: {
  printf("\n\n\t\t\tInvalid input, please try again");getch();
  goto goback;
  }
}
break;

      }
      case 'n': {
        printf("\n\n\t\t\tOkay...");
        GoBack();
        break;
      }
      default:
printf("\n\n\t\t\tInvalid choice...");getch();
goto Read;
break;
      }

    }


    // *===================================================Bill===================================================

    void Bill(double billsav) {
      FILE *fp;
      int x,y,z;
      fp = fopen("Bill.txt", "w+"); // write and read mode
      do {

        if (stockspent>0.0)
        {
            for (x = 0; x < o; x++) {
          fprintf(fp,"\n\n\t\t\tYou invested in: %s\n\n\t\t\tYou have invested Rs. : %0.2lf\n\n\t\t\tThe maturity amount will be : %0.2lf", nameofinvest[x],invested[x],maturity[x]);
        }
        fprintf(fp,"\n\n\t\t\tYou bought %0.2lf worth stocks",stockspent);
        fprintf(fp,"\n\n\t\t\tYou have %0.2lf savings left",q.y_sav);
        getch();
        // fprintf(fp, "Your savings after step 1:\t%lf\n", q.y_sav);
        }
        else
        {
            for (x = 0; x < o; x++) {
          fprintf(fp,"\n\n\t\t\tYou invested in: %s\n\n\t\t\tYou have invested Rs. : %0.2lf\n\n\t\t\tThe maturity amount will be : %0.2lf", nameofinvest[x],invested[x],maturity[x]);
        }
        fprintf(fp,"\n\n\t\t\tYou have %0.2lf savings left",q.y_sav);getch();
        // fprintf(fp, "Your savings after step 1:\t%lf\n", q.y_sav);
        }


        break;
      } while (q.y_sav > 0);
      fclose(fp);

    }
void Investment()
{   system("cls");
    printf("\t\tWHAT IS INVESTMENT?\n\n");
    printf("A Financial Investment is any asset or instrument purchased with the intention of selling said asset for a price higher\n");
    printf("than the purchase price at some future point in time (capital gains),or with the hope that the  asset will directly\n");
    printf("asset will directly bring in income (such as rental income or dividends).\n\n");
    printf("This guide will review the three main investment methods (or asset classes).\n");
    printf("The exact criteria for a transaction to be considered an investment, however,is not so concrete.\n");
    printf("From a broad perspective, there are many different categories of investments.\n");
    printf("Especially in terms of accounting, . Especially in terms of accounting, different\n");
    printf("transactions may be constituted as investments by different people.\n");
    printf("For example, a lease transaction may be seen as an investment by some but not by others.\n\n");
    printf("In a very broad definition, an investment can encapsulate any action or operation undertaken with the intention\n");
    printf("of generating some form of future income. As such, even the act of producing goods\n");
    printf("with the intention of reselling them in the future can be seen as an investment\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}

void GrowthInvestment()
{   system("cls");
    printf("\t\tGROWTH INVESTMENTS\n\n");
    printf("These are more suitable for long term investors that are willing and able to withstand market ups and downs.");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void Shares()
{   system("cls");
    printf("\t\tSHARES\n\n");
    printf("Shares are considered a growth investment as they can help grow the value of your original investment\n");
    printf("over the medium to long term. If you own shares, you may also receive income from dividends,\n");
    printf("If you own shares, you may also receive income from dividends, which are effectively a portion of a\n");
    printf("company’s profit paid out to its shareholders.Of course, the value of shares may also fall below the price\n");
    printf("you pay for them. Prices can be volatile from day to day and shares are generally \n");
    printf("best suited to long term investors, who are comfortable withstanding these ups and downs.\n\n");
    printf("Also known as equities, shares have historically delivered higher returns than other assets\n");
    printf("shares are considered one of the riskiest types of investment.\n");printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void Property()
{   system("cls");
    printf("\t\tPROPERTY\n\n");
    printf("Property is also considered as a growth investment because the price of houses and other properties can rise\n");
    printf("substantially over a medium to long term period.\n\n");
    printf("However, just like shares, property can also fall in value and carries the risk of losses.\n");
    printf("to invest directly by buying a property but also indirectly, through a property investment fund.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void DefensiveInvestments()
{   system("cls");
    printf("\t\tDEFENSIVE INVESTMENTS\n\n");
    printf("These are more focused on consistently generating income, rather than growth,\n");
    printf("and are considered lower risk than growth investments.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void Cash()
{   system("cls");
    printf("\t\tCASH\n\n");
    printf("Cash investments include everyday bank accounts, high interest savings accounts and term deposits.\n");
    printf("They typically carry the lowest potential returns of all the investment types.\n");
    printf("While they offer no chance of capital growth, they can deliver regular income and can play an\n");
    printf("important role in protecting wealth and reducing risk in an investment portfolio.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void MutalFunds()
{   system("cls");
    printf("\t\tMUTUAL FUNDS\n\n");
    printf("A mutual fund is a pool of many investors’ money that is invested broadly in\n");
    printf("a number of companies. Mutual funds can be actively managed or\n");
    printf("passively managed. An actively managed fund has a fund manager who\n");
    printf("picks securities in which to put investors’ money. Fund managers often try\n");
    printf("to beat a designated market index by choosing investments that will outperform such an index.\n\n");
    printf("A passively managed fund, also known as an index fund, simply tracks a major stock market index\n");
    printf("like the Dow Jones Industrial Average or the S&P 500. Mutual funds can invest in a broad array.\n");
    printf("of securities: equities, bonds, commodities, currencies and derivatives.\n\n");
    printf("Mutual funds carry many of the same risks as stocks and bonds, depending.\n");
    printf("on what they are invested in. The risk is often lesser, though, because the\n");
    printf("investments are inherently diversified./n");
    printf("");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void FixedInterst()
{   system("cls");
    printf("\t\tFIXED INTEREST\n\n");
    printf("The best known type of fixed interest investments are bonds, which are essentially when\n");
    printf("governments or companies borrow money from investors\n");
    printf("and pay them a rate of interest in return. Bonds are also considered as a\n");
    printf("defensive investment, because they generally offer lower potential returns\n");
    printf("and lower levels of risk than shares or property. They can also be sold\n");
    printf("relatively quickly, like cash, although it’s important to note that they are not\n");
    printf(" without the risk of capital losses.\n");    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();

}
void RetirementPlans()
{   system("cls");
    printf("\t\tRETIREMENT PLANS\n\n");
    printf("There are a number of types of retirement plans. Workplace retirement\n");
    printf("plans, sponsored by your employer. If you don’t have access to a\n");
    printf("retirement plan, you could get an individual retirement plan (IRA), of either\n");
    printf("the traditional or Roth variety. Retirement plans aren’t a separate category\n");
    printf("of investment, per se, but a vehicle for making investments, including\n");
    printf("purchasing stocks, bonds and funds, that exempt you from taxes in one of\n");
    printf("two ways: either letting you invest pretax dollars (as with a tradition IRA) or\n");
    printf("allowing you to withdraw money without paying taxes on that money.\n");
    printf("The risks for the investments are the same as if you were buying the investments outside of a retirement plan.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void Cryptocurrency()
{   system("cls");
    printf("\t\tCRYPTOCURRENCY\n\n");
    printf("Cryptocurrencies are a fairly new investment option. Bitcoin is the most\n");
    printf("famous cryptocurrency, but there are countless others, such as Litecoin and Ethereum.\n\n");
    printf("Cryptocurrencies are digital currencies that don’t have any\n");
    printf("government backing. You can buy and sell them on cryptocurrency\n");
    printf("exchanges. Some retailers will even let you make purchases with them.\n");
    printf("Cryptos often have wild fluctuations, making them a very risky investment.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}
void DebtInvestments()
{   system("cls");
    printf("\t\tDEBT INVESTMENTS\n\n");
    printf("Debt-based investments can be further broken down into two\n");
    printf("sub-categories – public and non-public (private) investments.\n");
    printf("Public debt investments are any investments that can be purchased or\n");
    printf("traded in open debt markets. These are such things as bonds, debentures,\n");
    printf("traded in open debt markets. These are such things as bonds, debentures,\n");
    printf("securities as held-to-maturity, available-for-sale, or held-for-trading.\n");
    printf("Each of these classifications has certain criteria and specific treatments under\n");
    printf("accounting standards.\n\n");

    printf("Private debt investments are any transactions that generate an asset on the\n");
    printf("balance sheet and are not openly or easily traded in markets. An example is\n");
    printf("the purchasing of another entity’s accounts receivables or loan receivables,\n");
    printf("which are expected to generate some form of future income.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
               MainPage();
}
void EquityInvestments()
{   system("cls");
    printf("\t\tEQUITY INVESTMENTS\n\n");
    printf("Equity investments can also be categorized as public and non-public\n");
    printf("investments. The latter is commonly known as Private Equity, which is\n");
    printf("considered a high risk, high reward investment. In fact, equity investments\n");
    printf("are generally seen as riskier than debt investments, with the advantage of\n");
    printf("potentially generating higher returns.\n\n");
    printf("Public equity investments are any equity-based investments that can be\n");
    printf("purchased or traded in markets. These are often the type of investments\n");
    printf("that someone has in mind when discussing investments. This covers such\n");
    printf("instruments as common stock, preferred stock, stock options, and stock\n");
    printf("warrants.Private equity investments are often larger-scale investments that are not\n");
    printf("within the scope of a small investor. Leveraged buyouts, mergers and\n");
    printf("acquisitions, and venture capital investments are just some of the more\n");
    printf("commonly undertaken types of private equity transactions.\n");
    printf("Enter M to go back to Menu and enter H to go back to the Home Page");
        if(toupper(getch())=='M')
                elearn();
        else
                MainPage();
}

void elearn ()
{ int ch;
system("cls");load();
Header();
printf("\n\n\t\t\tWELCOME TO E-LEARNING!!\n\n");
printf("\t\t\tEnter 1 for 'What is Investment?'\n\n");
printf("\t\t\tEnter 2 for 'Shares'\n\n");
printf("\t\t\tEnter 3 for 'Cash'\n\n");
printf("\t\t\tEnter 4 for 'Cryptocurrency'\n\n");
printf("\t\t\tEnter 5 for 'Debt Investment'\n\n");
printf("\t\t\tEnter 6 for 'Defensive Investments'\n\n");
printf("\t\t\tEnter 7 for 'Equity Investments'\n\n");
printf("\t\t\tEnter 8 for 'Fixed Interest'\n\n");
printf("\t\t\tEnter 9 for 'Growth Investments'\n\n");
printf("\t\t\tEnter 10 for 'Mutual Funds'\n\n");
printf("\t\t\tEnter 11 for 'Property'\n\n");
printf("\t\t\tEnter 12 for 'Retirement Plans'\n\n");
printf("\t\t\tEnter 13 for 'QUIZ'\n\n");
printf("\t\t\tElse Go Back to the Main Page\n\n");
printf("\t\t\tEnter your choice\n\n");
scanf("%d",&ch);

switch(ch)
 {
    case 1:Investment();

    break;
    case 2:Shares();

    break;
    case 3:Cash();

    break;
    case 4:Cryptocurrency();

    break;
    case 5:DebtInvestments();

    break;
    case 6:DefensiveInvestments();

    break;
    case 7:EquityInvestments();

    break;
    case 8:FixedInterst();

    break;
    case 9:GrowthInvestment();

    break;
    case 10:MutalFunds();

    break;
    case 11:Property();

    break;
    case 12:RetirementPlans();

    break;
    case 13:quiz();
    break;
    default: MainPage();
}

getch();
}

void quiz()
{
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     load();
     Header();
     printf("\n\t\t________________________________________\n");

     printf("\n\t\tWELCOME TO THE QUIZ SECTION OF INVESTO!");
     printf("\n\t\t=========================================\n");
     printf("\n\t\t   CHECK YOUR KNOWLEDGE!!!!!    ") ;
     printf("\n\t\t=========================================\n");
     printf("\n\t\t________________________________________\n");
     printf("\n\t\t 1. Press S to start the game");
     /*printf("\n\t\t 2. Press V to view the highest score  ");
     printf("\n\t\t 3. Press R to reset score");
     /*printf("\n\t\t 4. press H for help            ");*/
     printf("\n\t\t 5. press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	MainPage();
    else if(choice=='S')
    {
     system("cls");

    system("cls");
    printf("\n ------------------  Welcome %s to INVESTO Quiz Game --------------------------",username);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n 1. There are 2 rounds in this Quiz Game.");
    printf("\n 2. In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Main round.");
    printf("\n 3. You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n 4. You will be asked questions continuously, till right answers are given");
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
		    Label1: system("cls");
		printf("\n\nWhen the assets are arranged in the order of their liquidity?");
		printf("\n\nA.Investment\t\tB.Cash in hand\n\nC.Debtors\t\tD.None of the above");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
            }
		else if(toupper(getch())=='A'||toupper(getch())=='C'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch(); goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label1;
            break;
        }

        case 2:
            Label2: system("cls");
		printf("\n\n\nAn investor invests in assets known as a ?");
		printf("\n\nA.Securities \t\tB.Block of assests\n\nC.Portfolio\t\tD.None of the above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is C");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label2;
        }

        case 3:
            Label3: system("cls");
		printf("\n\n\nInvestments would score high only if there is a protection to?");
		printf("\n\nA.Real estate\t\tB.Preferred stock\n\nC.Government bonds\t\tD.Common stock");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is C");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label3;
        }
        case 4:
            Label4: system("cls");
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else if(toupper(getch())=='A'||toupper(getch())=='C'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label4;
        }
        case 5:
            Label5: system("cls");
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else if(toupper(getch())=='A'||toupper(getch())=='C'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label5;
        }

        case 6:
            Label6: system("cls");
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='C')
		       {
		           printf("\n\nWrong!!! The correct answer is D");
		           getch();
		       break;goto score;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label6;
        }break;}}

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
		    Label7: system("cls");
		printf("\n\nWhich type of investment is more suitable for long term investors ?");
		printf("\n\nA.Cash\t\tB.Fixed Interest\n\nC.Growth Investment\t\tD. Defensive Investment");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is C");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label7;
        }

		case 2:
		    Label8: system("cls");
		printf("\n\n\n What kind of investment is suitable for those who are comfortable withstanding the ups and downs?");
		printf("\n\nA.Shares\t\tB.Property\n\nC.Cash\t\tD.Defensive Investment");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label8;
        }

        case 3:
            Label9: system("cls");
		printf("\n\n\n What are shares also known as? ");
		printf("\n\nA.Capital\t\tB.Funds\n\nC.Equity\t\tD.Property");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is C");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label9;
        }

        case 4:
            Label10: system("cls");
		printf("\n\n\nWhich type of investment is the riskiest type of investment?");
		printf("\n\nA.Shares\t\tB.Fixed Interst\n\nC.Hybrid Investment\t\tD.Debt Investment");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label10;
        }

        case 5:
            Label11: system("cls");
		printf("\n\n\nWhich type of investments comes under Growth Investment?");
		printf("\n\nA.Debt Investments\t\tB.Property\n\nC.Defensive Investment\t\tD.Cash");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else if(toupper(getch())=='A'||toupper(getch())=='C'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label11;
        }

		case 6:
		    Label12: system("cls");
		printf("\n\n\nWhat type of investment is more focued on consistently generating income?");
		printf("\n\nA.Cash\t\tB.Defensive Investment\n\nC.Fixed Interest\t\tD.Debt Investment");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='A'||toupper(getch())=='C'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label12;
        }

        case 7:
            Label13: system("cls");
		printf("\n\n\nWhat type of investment has the lowest potential returns?");
		printf("\n\nA.Growth Investment\t\tB.Hybrid Investment\n\nC.Property\t\tD.Cash");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='C')
		       {
		           printf("\n\nWrong!!! The correct answer is D");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label13;
        }

        case 8:
            Label14: system("cls");
		printf("\n\n\nWhat is the best known type of fixed interestinvestments?");
		printf("\n\nA.Share\t\tB.Bonds\n\nC.Equity\t\tD.Cash");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else if(toupper(getch())=='A'||toupper(getch())=='C'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label14;
        }
        case 9:
            Label15: system("cls");
		printf("\n\n\n Which type of equity investment is often larger-scale investment that is not within the scope of a small investor ?");
		printf("\n\nA.Private Equity Investment\t\tB.Public Equity Investment\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label15;
        }

        case 10:
            Label16: system("cls");
		printf("\n\n\nWhich type of Equity Investment is a high risk, high reward investment ?");
		printf("\n\nA.Private Equity Investment\t\tB.Public Equity investment \n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
                        break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label16;
        }


        case 11:
            Label17: system("cls");
		printf("\n\n\nWhat type of Debt Investment generates an asset on the balance sheet and are not openly or easily traded in markets?");
		printf("\n\nA.Private Debt Investment\t\tB.Public Debt Investment\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label17;
        }


        case 12:
            Label18: system("cls");
		printf("\n\n\nWhich is the most famous Cryptocurrency?");
		printf("\n\nA.BitCoin\t\tB.LiteCoin\n\nC.DogeCoin\t\tD.Ethereum");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label18;
        }


		case 13:
		    Label19: system("cls");
		printf("\n\n\n Name the digital currency which does not have any kind of government backing ?");
		printf("\n\nA.Central Bank Digital Currency\t\tB.Virtual Currency\n\nC.Cryptocurrency\t\t");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else if(toupper(getch())=='A'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is C");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label19;
        }

        case 14:
            Label20: system("cls");
		printf("\n\n\n Lease transaction is a type of investment.");
		printf("\n\nA.True\t\tB.False\n\n");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='C'||toupper(getch())=='A'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is B");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label20;
        }

		case 15:
		    Label21: system("cls");
		printf("\n\n\n The act of producing goods with the intention of reselling them in the future is a type of investment. ");
		printf("\n\nA.True\t\tB.False\n\n");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else if(toupper(getch())=='C'||toupper(getch())=='B'||toupper(getch())=='D')
		       {
		           printf("\n\nWrong!!! The correct answer is A");
		           getch();goto score;
		       break;
		       }
        else
        {
            printf("\n\nInvalid choice!! Press any key to try again...");getch();
            goto Label15;
        }



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
	    printf("\n\t\t\t\t YOU ARE A MASTER OF INVESTMENT!!!!!!!!");
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T MUCH POINTS ********");
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
    }}

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

/*void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded points.");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
}*/

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
        fclose(f);
        }}
