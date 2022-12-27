#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,row,col;
    clrscr();
    printf("\n Enter rows and column:");
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    {
      printf("\n");
      for(j=1;j<=col;j++)
      {
        printf("*");
      }
      
    }
  getch();
}
