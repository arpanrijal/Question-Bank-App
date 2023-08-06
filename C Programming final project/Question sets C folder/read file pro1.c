#include<stdio.h>
int main()
{
    char question[8000];
    FILE *fpt;
    fpt=fopen("2073QUESTSET.txt","r");//This code is for 2080 question set only
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
    return 0;
}

