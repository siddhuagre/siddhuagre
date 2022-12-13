#include<stdio.h>
#include<conio.h>
void main()
{
    int no1,no2;
    clrscr();
    printf("Enter the no1:");
    scanf("%d",&no1);
    printf("\n Enter the no2:");
    scanf("%d",&no2);
    if(no1<no2)
    {
      printf("\n %d  is the greatest number");
    }
  else
  {
    printf("\n %d  is the smaller number");
  }
getch();
}
