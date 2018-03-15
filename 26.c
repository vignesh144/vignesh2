#include<stdio.h>
void main()
{
    int x,a[3],i,add=0;
    printf("enter the array");
    scanf("%d",&x);
    printf("enter the number of elements");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
       scanf("%d",&a[i]);
    add=add+a[i];    
}
    int middle=add/x;
    printf("%d",middle);
}



