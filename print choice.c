#include<stdio.h>
#include<conio.h>
void main()
{
    int ch;
    clrscr();
    printf("\n Enter your choice:");
    scanf("%d"&ch);
   switch(ch)
   {
       case1:
       printf("\n Good");
       break;
       case2:
       printf("\n Average");
       break;
       case3:
       printf("\n pass");
       break;
     default:
       printf("\n invalid choice");
   }
getch();
}
