#include <stdio.h>
#include <string.h>
#include <conio.h> //sign up, clear screen
#include <windows.h> //loading bar

void main()
{
    printf("LOGIN REQUIRED!!");
    int log;
    loadingBar();
    printf("\nEnter 1 to login and 2 to Signup: ");
    /*if(toupper(getch())=='S')
        newSignUp();
    else
        Login();*/
    scanf("%d",&log);
    system("cls");
    if(log==1)
        Login();
    else
        newSignUp();

}

int Login()
{
    char username[15];
    char password[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    if(strcmp(username,"Shresth")==0){
        if(strcmp(password,"123")==0){

        printf("\nWelcome.Login Success!");


        }else{
    printf("\nWrong password");
}
    }else{
    printf("\nUser doesn't exist");
}
    return 0;

}

void newSignUp()

{

char name[25],pwd[25],ver[25];

int i,a,digi=0,up=0,low=0,schar=0;

printf("Enter your Name: ");

scanf("%s",&name);//gets(name);

printf("Hello %s, Enter your password:\n",name);

scanf("%s",&pwd);//gets(pwd);

a=strlen(pwd);

if(a<5)

{

printf("Error: Password should contain contain minimum 5 characters ");

}

else if(a>12)

{

printf("Error: Password shouldn't exceed 12 characters ");

}

else

{

for(i=0;pwd[i]!=NULL;i++)

{

if(pwd[i]>='A' && pwd[i]<='Z')

up++;

if(pwd[i]>='a' && pwd[i]<='z')

low++;

if(pwd[i]>='0' && pwd[i]<='9')

digi++;

if(pwd[i]=='@'||pwd[i]=='#'||pwd[i]=='$')

schar++;

}

}

if(up==0)

printf("There must be at least one Uppercase\n");

if(low==0)

printf("There must be at least one Lowercase\n");

if(digi==0)

printf("There must be at least one Digit\n");

if(schar==0)

printf("There must be at least one Special Character\n");

else

{

printf("Confirm your Password\n");

scanf("%s",&ver);//gets(ver);

if(strcmp(pwd,ver)==0)
{
    system("cls");
    printf("Welcome %s, your is Password Verified",name);
}

else

printf("Password did not match");

}

getch();

}




// Function to creating loading bar
void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Loading...\n\n");
    printf("\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++) {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(100);
    }
    system("cls");
}
