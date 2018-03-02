#include<stdio.h>
void main()
{
    int hours,minutes,a;
    printf("enter the minutes");
    scanf("%d",&a);
    hours=a/60;
    minutes=a%60;
    printf("%d\t%d",hours,minutes);
    
}
