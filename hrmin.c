#include<stdio.h>
int main()
{
    int hr1,min1,hr2,min2,hr,min,total;
    printf("enter the hr1 and min1");
    scanf("%d%d",&hr1,&min1);
    printf("enter the hr2 and min2");
    scanf("%d%d",&hr2,&min2);
    if(((hr1*60)+min1)>((hr2*60)+min2))
    total=((hr1*60)+min1)-((hr2*60)+min2);
    else
    total=((hr2*60)+min2)-((hr1*60)+min1);
        hr=total/60;
        min=total%60;
    printf("%d\t%d",hr,min);
    return 0;
}
            
