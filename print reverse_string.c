#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    printf("string is:%s",str);
    printf("\n Reversed string is :%s",strrev(str));
    return 0;
}
