#include<stdio.h>
void main()
{
    int n,a[3],i,sum=0;
    printf("enter the array");
    scanf("%d",&n);
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    sum=sum+a[i];    
}
    int middle=sum/n;
    printf("%d",middle);
}



