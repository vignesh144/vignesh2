#include<stdio.h>
void main()
{
 int n;
scanf("%d\n",&n);
int a[n];
int j;
for(j=0;j<n;j++)
{
 scanf("%d ",&a[j]);
 }
for(j=0;j<n;j++)
{
 printf("%d %d\n",a[j],j);
}
}
