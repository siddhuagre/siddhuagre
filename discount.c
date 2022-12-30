#include<stdio.h>
#include<conio.h>
void main()
{
  int amount;
  float discount=0,net;
  clrscr();
  printf("\n Enter the Amount:");
  scanf("%d",&amount);
  if(amount>=1000)
  {
    discount=amount*0.10;
  }
  net=amount-discount;
  printf("\n Discount%.2f",discount);
  printf("\n Net value%.2f",net);
getch();
}
