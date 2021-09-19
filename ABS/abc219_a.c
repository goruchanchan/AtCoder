#include<stdio.h>
#define first  40
#define second 70
#define third  90

int main()
{
    int X,result=0;
    scanf("%d",&X);

    if(X<first)
    {
        result = first - X;
        printf("%d\n",result);
    }
    else if(X<second)
    {
        result = second - X;
        printf("%d\n",result);
    }
    else if(X<third)
    {
        result = third - X;
        printf("%d\n",result);
    }
    else
    {
        printf("expert\n");
    }
    return(0);
}