#include<stdio.h>
int main()
{
    char question[500];
    FILE *fpt;
    fpt=fopen("que.txt","r");
    if (fpt!=NULL)
    {
       while(!feof(fpt))
    {
        fgets(question,500,fpt);
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
