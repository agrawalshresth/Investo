#include <stdio.h>
#include <conio.h>
struct fixedDeposit{
double maturity, rate, principle; int tenure;};
void fixedDeposit()
{
    struct fixedDeposit f;
    system("cls");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tFIXED DEPOSIT\n\t\t\tYou have chosen fixed deposit which has less return and it is a long term investment.\n\t\t\tRate of Fixed Deposit of these five banks are given below:");
    printf("\n\t\t=============================================================");
    printf("\n\t\t\t\tSBI Bank\t\t\t5.4%\n\t\t\t\tAxis Bank\t\t\t5.5%\n\t\t\t\tHDFC Bank\t\t\t5.5%\n\t\t\t\tICICI Bank\t\t\t5.5%");
    printf("\n\n\t\t=============================================================\n");
    printf("\nDo you want to invest in FD?");
    scanf("");
    printf("\nEnter principle amount: ");
    scanf("%lf",&f.principle);
    printf("\nAssuming rate of interest to be 5.5");
    f.rate=0.055;
    printf("Enter tenure for investment: ");
    scanf("%d",&f.tenure);
    f.maturity=f.principle+(f.principle*f.rate*f.tenure);
    printf("Maturity amount after %d years will be %0.2lf",f.tenure,f.maturity);
}
struct recurringDeposit{
double maturity, rate, installment,compfreq; int tenure;};
void recurringDeposit()
{int i; double invested,interest; double teninmon;
    system("cls");
    struct recurringDeposit r;
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tRECURRING DEPOSIT\n\t\t\tYou have chosen recurring deposit which has less return and it is a long term investment.\n\t\t\tRate of Recurring Deposit of these five banks are given below:");
    printf("\n\t\t=============================================================");
    printf("\n\t\t\t\tSBI Bank\t\t\t5.4%\n\t\t\t\tAxis Bank\t\t\t5.5%\n\t\t\t\tHDFC Bank\t\t\t5.5%\n\t\t\t\tICICI Bank\t\t\t5.5%");
    printf("\n\n\t\t=============================================================\n");
    printf("\nDo you want to invest in RD?");
    scanf("");
    printf("\nEnter installment amount per month: ");
    scanf("%lf",&r.installment);
    printf("\nAssuming rate of interest to be 5.5");
    r.rate=0.055;
    printf("Enter tenure for investment: ");
    scanf("%d",&r.tenure);teninmon=(double) r.tenure*12.0;
    interest=(double)r.installment*r.rate*(1.0/12.0)*(teninmon*(teninmon+1)/2.0); invested=r.installment*teninmon;
    printf("Maturity amount after %d years will be %0.2lf",r.tenure,(invested+interest));
    savings-=r.installment*12;
}
struct PPF{
double principle,maturity;};

void PPF()
{
    system("cls");
    struct PPF p;
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tPUBLIC PROVIDENT FUNDS\n\n\t\t\tYou have chosen PPF which is a long term investment, as a compulsory lock in period is 15 years.\n\t\t\tRate of PPF as per central government is 7.1 per annum.");
    printf("\nDo you want to invest in PPF?");
    scanf();
    printf("Enter amount you wish to invest per year for the next 15 years: ");
    scanf("%lf",&p.principle);
    p.maturity=p.principle*((pow((1+0.071),15)-1)/0.071);
    printf("Maturity amount after 15 years will be %0.2lf",p.maturity);
    printf("After 15 years, you can opt to increase tenure by 5 years.");
    savings-=p.principle;
}
struct mutualFunds{double maturity,invest, rate;int tenure;};
void mutualFunds()
{
    struct mutualFunds mf;
    int ch,ch1;
    system("cls");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n\n");
    printf("\n\t\t\tMUTUAL FUNDS\n\n\t\t\tYou have chosen Mutual Funds which has a moderate to high risk.\n\t\t\tThere are two methods to invest.");
    printf("\n\t\t\tThere are thee types of Mutual funds:\n\t\t\t\t1. Equity Funds (high risk)\n\t\t\t\t2. Tax Savings\n\t\t\t\t3. Hybrid\n\t\t\t\t4. Debt(low risk)");
    printf("\n\t\t\tPerformances of the best mutual funds are given below: ");
    printf("\n\t\t============================EQUITY FUNDS=================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\tHigh\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===========================DEBT FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\tModerate   \t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\tHigh\t\t\t13.50%%");
    printf("\n\n\t\t===========================HYBRID FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t=========================================================================\n");
    printf("\nDo you want to invest in PPF?");
    scanf();
    printf("There are two ways to invest in these mutual funds: ")
    printf("\n\t\t\t\t1. Lump-sum Investment: the depositor invests a significant sum of money on a particular mutual fund scheme.");
    printf("\n\t\t\t\t2. SIP or Systematic Investment Plan, on the other hand, entails the investment of smaller amounts on a monthly basis.");
    printf("\n\t\t\tEnter 1 to invest in Lump-Sum.\n\t\t\tEnter 2 to invest in SIP.");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            system("cls");
            printf("\n\t\t________________________________________________________________________________");
            printf("\n\n");
            printf("\n\t\t\tLUMP-SUM INVESTMENT IN MUTUAL FUNDS");
            printf("\n\t\t\tPerformances of the best mutual funds are given below: ");
    printf("\n\t\t============================EQUITY FUNDS=================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\tHigh\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===========================DEBT FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\tModerate   \t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\tHigh\t\t\t13.50%%");
    printf("\n\n\t\t===========================HYBRID FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t=========================================================================\n");
            printf("\n\t\t\tEnter Amount you wish to invest: ");
            scanf("%lf",&mf.invest);
            printf("\n\t\t\tEnter expected rate of interest per compounded year: ");
            scanf("%lf",&mf.rate);
            mf.rate/=100;
            printf("\n\t\t\tEnter number of years you want to invest for: ");
            scanf("%d",&mf.tenure);
            mf.maturity=mf.invest*pow((1+mf.rate),mf.tenure);
            savings-=mf.invest;
            printf("Maturity amount after %d years will be %0.2lf",mf.tenure,mf.maturity);
        }break;
    case 2:
        {

            int turns;
            system("cls");
            printf("\n\t\t________________________________________________________________________________");
            printf("\n\n");
            printf("\n\t\t\tSIP INVESTMENT IN MUTUAL FUNDS");
            printf("\n\t\t\tPerformances of the best mutual funds are given below: ");
    printf("\n\t\t============================EQUITY FUNDS=================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\tHigh\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===========================DEBT FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\tModerate   \t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\tHigh\t\t\t13.50%%");
    printf("\n\n\t\t===========================HYBRID FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return")
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t=========================================================================\n");
            printf("\n\t\t\tEnter Amount you wish to invest: ");
            scanf("%lf",&mf.invest);
            printf("\n\t\t\tEnter expected rate of interest per compounded year: ");
            scanf("%lf",&mf.rate);
            mf.rate/=100;
            printf("\n\t\t\tEnter number of years you want to invest for: ");
            scanf("%d",&mf.tenure);
            turns=mf.tenure*12;
            mf.maturity=mf.invest*((pow((1+mf.rate),turns)-1)/mf.rate)*(1+mf.rate);
            savings-=mf.invest;
            printf("Maturity amount after %d years will be %0.2lf",mf.tenure,mf.maturity);
        }break;
    }
}
void main()
{
    int inc,exp,saving,ch,ch1;
    printf("\t\t\tHello Mr. X, Welcome to the Investment Plan section of Investo:)");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n");
    printf("\n\t\t\tWhat is your monthly income?\t");
    scanf("%d",&inc);
    printf("\n\t\t\tEnter your approximate monthly expenditure:\t");
    scanf("%d",&exp);
    system("cls");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n");
    printf("\n\t\t\tMonthly income of Mr.X: %d",inc);
    printf("\n\t\t\tMonthly expenditure: %d",exp);
    saving=(inc-exp)*12;
    printf("\n\t\t\tSavings in a year: %d",saving);
    printf("\n");
    printf("\n\t\t________________________________________________________________________________");
    printf("\n");
    printf("\n\t\t\tLow risk factor include investment in Real Estate.\n\t\t\tMedium risk factor include investments in mutual funds.\n\t\t\tHigh risk factor include investments in Share Market.");
    printf("\n\t\t\tWhat is the risk factor you are ready to take?");
    printf("\n\t\t\t\t1. Low risk\n\t\t\t\t2. Moderate to High Risk\n\t\t\t\t3. High Risk\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:{
        LowRisk:
        system("cls");
        printf("\n\t\t________________________________________________________________________________");
    printf("\n");
        printf("\t\tLOW RISK");
        printf("\n\t\t\t1. Fixed Deposit\n\t\t\t2. Real Estate\n\t\t\t3. Public Provident Fund\n\t\t\t4. Senior Citizens' Saving Scheme\n\t\t\t5. Recuring Deposit");
        scanf("%d",&ch1);
        switch(ch1){
        case 1:
        {
            fixedDeposit();
        }break;
        case 2:
        {
            realEstate();
        }break;
        case 3:
        {
            PPF();
        }break;
        case 4:
        {
            seniorCitizen();
        }break;
        case 5:
            {
                recurringDeposit();
            }break;
        default: goto LowRisk;
        }
    }break;

    }
}
