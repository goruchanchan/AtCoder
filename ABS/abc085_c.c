#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int flag = FALSE;
    int N;
    unsigned int Y;
    unsigned long i,j;

    scanf("%d %d",&N,&Y);

    for(i=0;i<=N && flag==FALSE;i++)
    {
        for(j=0;j<=N-i && flag==FALSE;j++)
        {
            if(Y == (10000 * i + 5000 * j + 1000 * (N-i-j) ) )
            {
                printf("%ld %ld %d\n",i,j,(int)(N-i-j));
                flag = TRUE;
            }
        }
    }

    if(flag == FALSE)
    {
        printf("-1 -1 -1\n");
    }

}