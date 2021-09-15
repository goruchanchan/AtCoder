#include<stdio.h>

int main()
{
    unsigned int a,b=0;
 
    scanf("%d %d",&a,&b);

    if((a*b)%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return(0);
}