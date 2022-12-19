#include<stdio.h>
#include<conio.h>
void main()
{
    int e,i=2;
    clrscr();
    printf("\n Enter ending position:");
    scanf("%d",&e);
    while(i<=e)
    {
      printf("\n %d",i);
      i=i+2;
    }
getch();
}
