#include <stdio.h>
#include <math.h>

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
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\tHigh\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===========================DEBT FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\tModerate   \t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\tHigh\t\t\t13.50%%");
    printf("\n\n\t\t===========================HYBRID FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Indiabulls Savings Income Direct-G\t\t\tLow\t\t\t9.02%%");
    printf("\n\t\t\t2. Mirae Asset Hybrid Equity Direct- G\t\t\tHigh\t\t\t12.07%%");
    printf("\n\t\t\t3. ICICI Pru Equity & Debt Direct-G\t\t\tHigh\t\t\t12.20%%");
    printf("\n\n\t\t=========================================================================\n");
    /*printf("\nDo you want to invest in PPF?");
    scanf();*/
    printf("There are two ways to invest in these mutual funds: ");
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
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\tHigh\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===========================DEBT FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\tModerate   \t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\tHigh\t\t\t13.50%%");
    printf("\n\n\t\t===========================HYBRID FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
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
            /*savings-=mf.invest;*/
            printf("Maturity amount after %d years will be %0.2lf",mf.tenure,mf.maturity);
        }break;
    case 2:
        {

            double monthrate, turns;
            system("cls");
            printf("\n\t\t________________________________________________________________________________");
            printf("\n\n");
            printf("\n\t\t\tSIP INVESTMENT IN MUTUAL FUNDS");
            printf("\n\t\t\tPerformances of the best mutual funds are given below: ");
    printf("\n\t\t============================EQUITY FUNDS=================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sunlife Frontline Equity Fund\t\t\tModerate\t\t\t9.47%%");
    printf("\n\t\t\t2. HDFC Mid-cap Opportunities Fund\t\t\tHigh\t\t\t12.60%%");
    printf("\n\t\t\t3. ICICI Pru Focused Bluechip Equity Fund\t\t\tModerate\t\t\t13.18%%");
    printf("\n\n\t\t===========================DEBT FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
    printf("\n\t\t\t1. Aditya Birla Sun Life Active Debt Multi-manager FoF Scheme\t\t\tLow\t\t\t8.30%%");
    printf("\n\t\t\t2. Axis Short Term –Direct Plan\t\t\tModerate   \t\t\t10.06%%");
    printf("\n\t\t\t3. Canara Robeco Income- Reg\t\t\tHigh\t\t\t13.50%%");
    printf("\n\n\t\t===========================HYBRID FUNDS==================================\n");
    printf("\n\t\t\tName of stock\t\t\tRisk\t\t\t1-Year Return");
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
            turns=mf.tenure*12.0; monthrate=(mf.rate/12.0)/100.0;
            mf.maturity=(double) (mf.invest*((pow((1+monthrate),turns)-1))*(1+monthrate))/monthrate;
            /*savings-=mf.invest;*/
            printf("\nMaturity amount after %d years will be %0.2lf",mf.tenure,(mf.maturity+mf.invest*turns));

        }break;
    }
}
void main()
{
    mutualFunds();
}
