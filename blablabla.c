#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#define MAX_LENGTH 800

#include<math.h>

#include<windows.h>

#include<unistd.h> //used to use sleep() and fflush(stdout)

#include<string.h>
struct questiononly{
                char question[500];
                };
struct answeronly{
                char answer[8000];

};

void afterLogin();
void quesPast();
void repeatQuestPastYear();
void showOutputQuest();
void palifiboarmfun();
void paliFiboArm();
void addYourQuest();
void pastque2080();
void pastque2079();
void switch_case_p();
void sourceCodeShow();
void strUserDefineFun(char str);
char username[10];
char password[20];
void YourSavedAnswer();
void decisionSelection();
void repSourceDecision();
void space();
int azq=0;

int main()
{
     system("color 70");
    printf("\t\t\t\t\tER. C PROGRAMMING LOGIN PAGE\n\n\n");
    printf("Introduction: Welcome to Er. C programming Login Page.\nYour system default Username and Password is \"admin\"\n\n");
     if(azq>=1)
    {
        printf("\t\tWRONG LOGIN\n\n");
    }
    printf("Enter your username: ");
    scanf("%s", username);
    int i = 0;
    char ch;
    printf("\nEnter your password: ");
    while ((ch = _getch()) != '\r')
    {
        if (ch == '\b')
        {
            if (i > 0)
            {
                printf("\b \b");
                i--;
            }
        }
        else
        {
            password[i++] = ch;
            printf("*");
        }
    }
    password[i] = '\0';
    if(strcmp(password,"admin") == 0 && strcmp(username,"admin") == 0)
    {
        afterLogin();
    }
    else
    {
        system("cls");
        azq++;
        main();
    }

}

void afterLogin()
{
    system("color 70");
    int choice;

    system("cls");

    printf("---------------------------------------\n");

    space(10);printf("Word By Devs:\tWelcome to Er.C solution App.\n\t\tThis app is made to help\n\t\tstudent who want to learn c\n\t\tprogramming easily.\n\t\twe provide you the full\n\t\tsolution so it helps you in\n\t\tour exam.\n\n");

    printf("Developer:\tArpan,Sugam,Sujan\n");

    printf("---------------------------------------\n\n");

    printf("\n\n1. All past year question (2069-2080)\n");

    printf("\n2. Repeated past year question (2069-2080)\n");

    printf("\n3. Palindrome, Fibonacci, Armstrong questions (2069-2080)\n");

    printf("\n4. \"SOURCE CODE\" of past year question (Important only)\n");

    printf("\n5. Add your question with solution\n");

    printf("\n6. Your saved questions solution\n");

    wrongInput:

    printf("\n\nEnter the category number to go to that section: ");

    scanf("%d",&choice);

    //debug the input if user enter string then it go for Infiniti loop

    switch(choice)

    {

    case 1:

         system("cls");

        quesPast();

        break;

    case 2:

         system("cls");

        repeatQuestPastYear();

        break;

    case 3:

         system("cls");

      paliFiboArm();

        break;

      case 4:

          system("cls");

      sourceCodeShow();

          break;

       case 5:

            system("cls");
            addYourQuest();
            break;

    case 6:

            system("cls");

           YourSavedAnswer();



           break;

    default:

        printf("Invalid Input!\n");

        printf("Choose number between 1-6\n\n");

        goto wrongInput;

        break;

    }
}

//Function of past year question all year.

void quesPast()

{

    int year,var,j;

    char decision;
    system("cls");

selectyear:



    printf("Select the year:\n\n2080\t2079\t2078\n2077\t2076\t2075\n2074\t2073\t2072\n2071\t2070\t2069\n\n");

    printf("Enter year: ");

    scanf("%d",&year);

    switch(year)

    {

    case 2080:


     system("cls");
     char question[8000];
     //pastque2080();
     FILE *fpt;
    fpt=fopen("2080QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt!=NULL)
    {
       while(!feof(fpt))
    {
        fgets(question,8000,fpt);
        puts(question);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt);

    //user choice selection using seperat function
    decisionSelection();

        break;

    case 2079:

     system("cls");
     char question2079[8000];
     FILE *fpt2079;
    fpt2079=fopen("2079QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2079!=NULL)
    {
       while(!feof(fpt2079))
    {
        fgets(question2079,8000,fpt2079);
        puts(question2079);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2079);

 //user choice selection using seperat function
    decisionSelection();
        break;

    case 2078:

        system("cls");
     char question2078[8000];
     FILE *fpt2078;
    fpt2078=fopen("2078QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2078!=NULL)
    {
       while(!feof(fpt2078))
    {
        fgets(question2078,8000,fpt2078);
        puts(question2078);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2078);

     //user choice selection using seperat function
    decisionSelection();
        break;

    //No exam held at this time...

    case 2077:


        printf("NO PHYSICAL EXAM HELD BY IOE BUT THIS EXAM IS SHIFTED 2078");
         //user choice selection using seperat function
    decisionSelection();
        break;

    case 2076:

        system("cls");
     char question2076[8000];
     //pastque2076();
     FILE *fpt2076;
    fpt2076=fopen("2076QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt!=NULL)
    {
       while(!feof(fpt2076))
    {
        fgets(question,8000,fpt2076);
        puts(question);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2076);

       //user choice selection using seperat function
    decisionSelection();
        break;

    case 2075:
        system("cls");
     char question2075[8000];
     FILE *fpt2075;
    fpt2075=fopen("2075QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2075!=NULL)
    {
       while(!feof(fpt2075))
    {
        fgets(question2075,8000,fpt2075);
        puts(question2075);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2075);

  //user choice selection using seperat function
    decisionSelection();
        break;

    case 2074:

                system("cls");
     char question2074[8000];
     FILE *fpt2074;
    fpt2074=fopen("2074QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2074!=NULL)
    {
       while(!feof(fpt2074))
    {
        fgets(question2074,8000,fpt2074);
        puts(question2074);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2074);
       //user choice selection using seperat function
    decisionSelection();
        break;

    case 2073:
            system("cls");
     char question2073[8000];
     FILE *fpt2073;
    fpt2073=fopen("2073QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2073!=NULL)
    {
       while(!feof(fpt2073))
    {
        fgets(question2073,8000,fpt2073);
        puts(question2073);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2073);
   //user choice selection using seperat function
    decisionSelection();
        break;

    case 2072:

                system("cls");
     char question2072[8000];
     FILE *fpt2072;
    fpt2072=fopen("2072QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2072!=NULL)
    {
       while(!feof(fpt2072))
    {
        fgets(question2072,8000,fpt2072);
        puts(question2072);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2072);
    //user choice selection using seperat function
    decisionSelection();
        break;

    case 2071:

            system("cls");
     char question2071[8000];
     FILE *fpt2071;
    fpt2071=fopen("2071QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2071!=NULL)
    {
       while(!feof(fpt2071))
    {
        fgets(question2071,8000,fpt2071);
        puts(question2071);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2071);
      //user choice selection using seperat function
    decisionSelection();
        break;

    case 2070:


                system("cls");
     char question2070[8000];
     FILE *fpt2070;
    fpt2070=fopen("2070QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2070!=NULL)
    {
       while(!feof(fpt2070))
    {
        fgets(question2070,8000,fpt2070);
        puts(question2070);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2070);
       //user choice selection using seperat function
    decisionSelection();
        break;

    case 2069:

                system("cls");
     char question2069[8000];
     FILE *fpt2069;
    fpt2069=fopen("2069QUESTSET.txt","r");//This code is for 2080 question set only
    if (fpt2069!=NULL)
    {
       while(!feof(fpt2069))
    {
        fgets(question2069,8000,fpt2069);
        puts(question2069);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fpt2069);
      //user choice selection using seperat function
    decisionSelection();
        break;

    default:

        printf("\nPlease enter date in between 2080-2069");

        goto selectyear;

        break;

    }
}

     void repeatQuestPastYear()
     {
         int j;
         char decision,repeatquestPastYear[8000],QuestCharacter[8000];

         system("cls");
     FILE *fptrepque;
    fptrepque=fopen("repeatquestPastYears.txt","r");//This code is for repeatquestPastYear question set only
    if (fptrepque!=NULL)
    {
       while(!feof(fptrepque))
    {
        fgets(repeatquestPastYear,8000,fptrepque);
        puts(repeatquestPastYear);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fptrepque);
//function for source and rep only quest
   repSourceDecision();
     }





        void paliFiboArm()

        {
            char opt,armopt,decision;
            char str[17];
            int num,n1,n2,numarm,z=0,series,count=0,temp,temp1,rem;
    start:


     palfibarmhome:
    selectquest:
        system("cls");
        start1:
    printf(" Command Execution Page\n");
    printf("\n For question enter \"q\" For Palindrome, Fibonacci and Armstrong Question only(2080-2069)\n For program execution enter \"p\" \n");
    printf(" Enter your command: ");
    scanf(" %c",&opt);
     system("cls");
    switch(opt)
    {
        case 'q':
       palifiboarmfun();
       printf("\n\nPress \"c\" to continue, press \"b\" to go to home screen and press \"e\" to exit the program: ");
        scanf(" %c",&decision);
        if(decision=='c')
        {
            system("cls");
            goto selectquest;
        }
        if(decision=='e')
        {
             system("cls");
            printf("Exiting....");
            exit(0);
        }
        if(decision=='b')
        {
             system("cls");
           afterLogin();
            break;
        }
        break;



    case 'p':

       switch_case_p();//function call for question print...
    printf("\n\nEnter question number of that code: ");
        scanf("%d",&num);
        if(num==1)
        {
         system("cls");
            printf("Generate fibonacci series<500\n\n");
            printf("Enter first number: ");
            scanf("%d",&n1);
            printf("Enter second number: ");
            scanf("%d",&n2);
            series=n1+n2;
            while(series<500)
            {
                if(series<500)
                {
                    printf("%d, ",series);
                    n1=n2;
                    n2=series;
                    series=n1+n2;
                }
                else
                {
                    printf("Series is greater that 500");
                    break;
                }
            }
            printf("\n\nEnter \"m\" for this section main menu or \"h\" for homescreen\n enter any character to exit the program: ");
            scanf(" %c",&armopt);
            if(armopt=='m')
            {
             system("cls");
                goto start;
            }
            else if(armopt=='h')
            {
             system("cls");
                afterLogin();
            }
            else
            {
             system("cls");
            printf("Exiting...");
                exit(0);
            }
            break;


        }
        else if(num==2)
          {
              system("cls");
              printf("To check the given number is Armstrong number or not\n\n");
              printf("Enter number: ");
              scanf("%d",&numarm);
              temp=numarm;
              while(temp!=0)
              {
                  temp=temp/10;
                  count++;
              }
              temp1=numarm;
              while(temp1!=0)
              {
                  rem=temp1%10;
                  z=z+pow(rem,count);
                  temp1=temp1/10;
              }
              if(z==numarm)
              {
                  printf("%d is Armstrong number!",numarm);
              }
              else
              {
                  printf("%d so it isn't Armstrong number!",numarm);
              }

               printf("\n\n\Enter \"m\" for this section main menu or \"h\" for homescreen\n enter any character to exit the program: ");
              scanf(" %c",&armopt); //we need to use address & to store character so it can be used in if.
              if(armopt=='m')
              {
             system("cls");
                  goto start;
              }
              else if(armopt=='h')
              {
             system("cls");
                  afterLogin();
              }
              else
              {
            system("cls");
            printf("Exiting....");
                  exit(0);
              }
              break;
          }
        else if(num==3)
        {

            system("cls");
            printf("\tCheck given string is palindrome or not using user defined function\n");
            printf("\n\nEnter your word: ");
            scanf("%s", str);
            checkPalindrome(str);
            printf("\n\n\Enter \"m\" for this section main menu or \"h\" for homescreen\n enter any character to exit the program: ");
              scanf(" %c",&armopt); //we need to use address & to store character so it can be used in if.
              if(armopt=='m')
              {
             system("cls");
                  goto start1;
              }
              else if(armopt=='h')
              {
             system("cls");
                  afterLogin();
              }
              else
              {
            system("cls");
            printf("Exiting....");
                  exit(0);
              }
              break;
        }
        else if(num==4)
        {

        }
        else
        {
            printf("Invalid Input! enter number between 1-4!");
        }
        break;
    default:


        printf("\n\nInvalid Input");
        goto palfibarmhome;
        break;
    }
}
//string function for 1330 line
void checkPalindrome(char str[])
{
    int length = strlen(str);
    int i, j;
    int isPalindrome = 1; // Assume the string is a palindrome

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0; // Update the flag if characters don't match
            break;
        }
    }

    if (isPalindrome)
    {
        printf("%s is a palindrome", str);
    }
    else
    {
        printf("%s is not a palindrome", str);
    }
}

    void showOutputQuest( )

     {
         int j;
         char decision,showoutputQuest[8000];

         FILE *fptshoutque;
    fptshoutque=fopen("showoutputQuest.txt","r");
    if (fptshoutque!=NULL)
    {
       while(!feof(fptshoutque))
    {
        fgets(showoutputQuest,8000,fptshoutque);
        puts(showoutputQuest);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fptshoutque);


 //function for source and rep only quest
   repSourceDecision();
     }

      void palifiboarmfun()
     {
         char questionpfa[8000];
FILE *fptpfa;
    fptpfa=fopen("pali-fibo-arm.txt","r");
    if (fptpfa!=NULL)
    {
       while(!feof(fptpfa))
    {
        fgets(questionpfa,8000,fptpfa);
        puts(questionpfa);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fptpfa);

    }


void sourceCodeShow()
{
     char decision, sourcecodeV[8000];
    FILE *fptsourcec;
    fptsourcec = fopen("sourceCode.txt", "r"); // This code is for the source code of the question

    if (fptsourcec != NULL) {

        while (fgets(sourcecodeV, 8000, fptsourcec) != NULL) {
            puts(sourcecodeV);
        }
    } else {
        printf("Error opening the file.\n");
    }

    fclose(fptsourcec);

//function for source and rep only quest
   repSourceDecision();
}



void switch_case_p()
{
    /* char QuestCharacter;
    FILE *fptpalifiboquests;

    system("cls");

    fptpalifiboquests = fopen("sourceCode.txt", "r"); // This code is for repeatquestPastYear question set only

    if (fptpalifiboquests != NULL) {
            printf("Hello");
        while (fgets(QuestCharacter, 8000, fptpalifiboquests) != NULL) {
            puts(QuestCharacter);
        }
        fclose(fptpalifiboquests); // Close the file only if it was successfully opened
    } else {
        printf("error");
    }*/

         // int j;
         char showoutputQuest1[8000];

         FILE *fptshoutque1;
    fptshoutque1=fopen("palifiboQuest.txt","r");
    if (fptshoutque1!=NULL)
    {
       while(!feof(fptshoutque1))
    {
        fgets(showoutputQuest1,8000,fptshoutque1);
        puts(showoutputQuest1);
    }
    }
    else
    {
        printf("error");
    }

    fclose(fptshoutque1);

}


void space(int n)
{for(int i=0;i<n;i++)
{

    printf(" ");
}
}

void decisionSelection()
{
    char decision;
printf("\n\nPress \"c\" to continue, press \"b\" to go to home screen and press \"e\" to exit the program: ");

        scanf(" %c",&decision);

        if(decision=='c')

        {
            system("cls");

            quesPast();

        }

        if(decision=='e')

        {

            system("cls");

            for(int j=3; j>=1; j--)

            {

            printf("Exiting.... in %dsec",j);

            fflush(stdout); // Flush the output buffer to display the message immediately

            sleep(1); // Sleep for 3 seconds
             system("cls");


           }

            system("cls");

           printf("Exit Successful.\nPress any key to close the terminal!\n\n");

            exit(0);

        }

        if(decision=='b')

        {

             system("cls");

            afterLogin();

        }
}

void repSourceDecision()
{
    char decision;
printf("\n\nPress \"b\" to go to home screen and press \"e\" to exit the program: ");

        scanf(" %c",&decision);

        if(decision=='e')

        {

            system("cls");

            for(int j=3; j>=1; j--)

            {

            printf("Exiting.... in %dsec",j);

            fflush(stdout); // Flush the output buffer to display the message immediately

            sleep(1); // Sleep for 3 seconds
             system("cls");


           }

            system("cls");

           printf("Exit Successful.\nPress any key to close the terminal!\n\n");

            exit(0);

        }

        if(decision=='b')

        {

             system("cls");

            afterLogin();

        }
}


void addYourQuest()
{

FILE *fpquad=NULL;
FILE *fpans=NULL;

    fpquad=fopen("questiononlyfile.txt","a");
    fpans=fopen("answeronlyfile.txt","a");
    struct questiononly qQ[30];
    struct answeronly qA[30];
    int numm1m, numm2m;
    printf("Enter your question each character with space length: ");
    scanf("%d",&numm1m);
    printf("Enter your source code each character with space length: ");
    scanf("%d",&numm2m);
printf("Enter the question:");
for(int i=0;i<numm1m;i++)
{
    gets(qQ[i].question);
    fwrite(&qQ[i],sizeof(struct questiononly),1,fpquad);
}
printf("Enter your answer:");
for(int i=0;i<numm2m;i++)
{
    gets(qA[i].answer);
    fwrite(&qA[i],sizeof(struct answeronly),1,fpans);
}

for(int i=0;i<2;i++)
{

    printf("%s\n",qQ[i].question);
    printf("%s\n",qA[i].answer);
}
fclose(fpquad);
fclose(fpans);
 //user choice selection using seperat function
    repSourceDecision();
}


void YourSavedAnswer()
{
    FILE*fpabc;
    FILE*fpdef;
    fpabc=("questiononlyfile.txt","r");
    fpdef=("answeronlyfile.txt","r");
    struct questiononly qQ[30];
    struct answeronly qA[30];
    int n=0;
    if(fpabc=NULL)
    {
        printf("Error!");
    }
    else

    {
   while (fread(&qQ[n], sizeof(struct questiononly), 1, fpabc) == 1)
        {
            fread(&qA[n], sizeof(struct answeronly), 1, fpdef);
            n++;
        }
        for(int i=0;i<2;i++)
        {
    printf("%s",qQ[i].question);

    printf("%s",qA[i].answer);
        }
    fclose(fpabc);
    fclose(fpdef);

    }
     //user choice selection using seperat function
    repSourceDecision();

}
















