#include<stdio.h>

#define TRUE 1
#define FALSE 0


int main ()
{
    int flag = TRUE;
    unsigned int N,tmp,i,j,count=0;
    unsigned int  dia_var[100]={0};

    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        flag = TRUE;

        scanf("%d",&tmp);
        for(j=0;j<i;j++)
        {
            if(dia_var[j]==tmp)
            {
                flag = FALSE;
            }
        }
        if(flag == TRUE)
        {
            dia_var[count] = tmp;
            count++;
        }
    }

    printf("%d\n",count);

    return(0);
}