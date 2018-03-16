#include<stdio.h>
void main()
{
 int s;
scanf("%d\n",&s);
int a[s];
int i;
for(i=0;i<s;i++)
{
 scanf("%d ",&a[i]);
 }
for(i=0;i<s;
    i++)
{
 printf("%d %d\n",a[i],i);
}
}
