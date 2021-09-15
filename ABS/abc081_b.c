#include<stdio.h>

int main()
{
    unsigned long var_A[200] = {0};
    unsigned long Sum=0;
    unsigned int i,N,count = 0;
    unsigned char flag = 1;
    
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
     scanf("%ld",&var_A[i]);
    }

    while(flag==1)
    {
        i%=N;
        if(var_A[i]%2 != 0)
        {
            flag = 0;
        }
        else
        {
            var_A[i] /= 2;
        }
        if(i==(N-1) && flag == 1)
        {
            count++;
        }
       i++;
    }

    printf("%d\n",count);

    return(0);
}