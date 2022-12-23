#include<stdio.h>
#include<conio.h>
void main()
{
  int no1,no2;
  char ch;
  clrscr();
  printf("\n Enter Arithmetic Operation:");
  scanf("%c",&ch);
  printf("\n Enter Two numbers:");
  scanf("%d%d",&no1,&no2);
  switch(ch)
  {
      case'+':printf("\n Addition=%d",no1+no2);
              break;
      case'-':printf("\n Subtraction=%d",no1-no2);
              break;
      case'*':printf("\n Multiplication=%d",no1*no2);
              break;
      case'/':printf("\n Division=%d",no1/no2);
              break;
    default:printf("wrong operation");
            break;
  }
 getch();
}
