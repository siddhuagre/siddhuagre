#include<stdio.h>
#include<conio.h>
void main()
{
    int i,fact=1,j;
    clrscr();
    printf("\n Enter the number:");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
      fact=fact*j;
    }
   printf("\n fact=%d",fact);
getch();
}
