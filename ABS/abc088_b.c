#include<stdio.h>

int main()
{
    unsigned int i,j,N=0,tmp=0,flag=0;
    unsigned int A_sum=0,B_sum=0; 
    unsigned int a[100]={0};
    scanf("%d",&N);
    for(i = 0;i < N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < N ;i++)
    {
        for(j = 0; j < (N -1);j++)
        {
            if(a[j]>a[j+1])
            {
                tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp; 
            }
        }
    }

    for(i = N;i > 0;i--)
    {
        if(flag == 0)
        {
            A_sum += a[i-1];
            flag = 1;
        }
        else
        {
            B_sum += a[i-1];
            flag = 0;
        }
    }

    printf("%d\n",A_sum - B_sum);

    return(0);
}
