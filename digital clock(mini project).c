#include<stdio.h>
#include<windows.h>
#include<conio.h>
void main()
{
    int h,m,s;
    int d=1000; //delay 1000 milli seconds
    printf("set time : \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR! /n");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n ClocK :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(d);//slows down the while loop
        system("cls");
        getch();
    }
}