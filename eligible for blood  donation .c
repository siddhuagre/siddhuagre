#include<stdio.h>
#include<conio.h>
 void main()
 {
     int age,weight;
     clrscr();
     printf("\n Enter the age:");
     scanf("%d",&age);
     printf("\n Enter the weight:");
     scanf("%d",&weight);
   if(age>=18)
   {
      if(weight>=50)
      {
        printf("\n Eligible for blood donation"); 
      }
     else
       {
       printf("\n Not Eligible for blood donation");
     }
   }
   else
   {
     printf("\n Not eligible for blood donation");
   }
 getch();
 }
     
       
