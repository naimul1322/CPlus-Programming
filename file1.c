#include<stdio.h>
int main()
{
    while(1)
    {
        FILE *file;
    char name[50];
    file=fopen("hello.txt","a");

    if(file==NULL)
    {
        printf("File is not open");
    }
    else
    {
         printf("File is open\n\n");
        printf("Enter your infomation: ");
        gets(name);
        fputs(name,file);
        fputs(" \n",file);
        printf("\ninformation save the hello file ");
        fclose(file);
    }

    }
    getch();
}
