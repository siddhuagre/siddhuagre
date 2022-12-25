#include<stdio.h>
#include<conio.h>
void main()
{
  int n1=0,n2=1,n3,i,number;
  clrscr();
  printf("\n Enter the number of elememts:");
  scanf("%d",&number);
  printf("\n %d%d",n1,n2);
  for(i=2;i<number;i++)
  {
    n3=n1+n2;
    printf("\n %d",n3);
    n1=n2;
    n2=n3;
  }
getch();
}
