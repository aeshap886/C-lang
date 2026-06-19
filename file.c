#include<stdio.h>

int main()
{
    FILE *fp;

    fp =fopen("test.txt","w");

    if(fp == NULL)
    {
        printf("file cannot be opened !");

        return 1;
    }

    fprintf(fp,"Hello CDAC !");
    fprintf(fp,"\nwelcome to file handlinhg");

    fclose(fp);

    printf("data written successfully.");

    return 0;
}