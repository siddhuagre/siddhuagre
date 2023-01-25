#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("enter any two numbers=");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\n after interchange=%d",a);
printf("\n after interchange=%d",b);
getch();
return 0;
}
