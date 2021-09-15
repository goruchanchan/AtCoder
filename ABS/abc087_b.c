#include<stdio.h>

int main()
{
    unsigned int A,B,C,X,tmpX,tmpX_2,tmpX_3,count = 0;
    int i,j,k;
    
    scanf("%d %d %d %d",&A,&B,&C,&X);
   
    for(i=0;i<=A;i++)
    {
        tmpX = X - (500*i);
        for(j=0;j<=B;j++)
        {
            tmpX_2 = tmpX - (100*j);
            for(k=0;k<=C;k++)
            {
                tmpX_3 = tmpX_2 - (50*k);
                if(tmpX_3==0)
                {
                    count++;
                }
            }
        }
    }

    printf("%d\n",count);

    return(0);
}