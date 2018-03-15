#include<stdio.h>
#include<string.h>
void main()
{
    char a;
    printf("enter the vlaues");
    scanf("%s",&a);
    if(a>='A' && a<='z')
    {
        printf("this is not string");
    }
    else
    {
        printf("this is string");
    }
}

