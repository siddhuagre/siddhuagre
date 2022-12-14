#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    clrscr();
    printf("\n enter the year:");
    scanf("%d",&year);
    if(year%4==0)
    {
    printf("\n the given year is leap year");
    }
    else
    {
    printf("\n the given year is not leap year");
    }
getch();
}
