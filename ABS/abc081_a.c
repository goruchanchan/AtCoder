#include<stdio.h>

int main()
{
    unsigned int i,tmp,count=0;

    scanf("%d",&tmp);

    for(i=0;i<3;i++)
    {
        if(tmp%10==1)
        {
            count++;
        }
        tmp/=10;
    }

    printf("%d\n",count);

    return(0);
}