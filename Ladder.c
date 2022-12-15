#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("\n Enter three value:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    if(a>b &&a>c)
    {
    printf("\n A is greater");
    }
    else if(b>a && b>c)
    {
    printf("\n B is greater");
    }
    else if(c>a && c>b)
    {
    printf("\n C is greater");
    }
    else
    {
    printf("\n All are equal");
    }
getch();
}
