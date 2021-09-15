#include<iostream>

int main()
{
    unsigned int A,B,C,X,tmpX,tmpX_2,tmpX_3,count = 0;

    std::cin >> A >> B >> C >> X;
   
    for(int i=0;i<=A;i++)
    {
        tmpX = X - (500*i);
        for(int j=0;j<=B;j++)
        {
            tmpX_2 = tmpX - (100*j);
            for(int k=0;k<=C;k++)
            {
                tmpX_3 = tmpX_2 - (50*k);
                if(tmpX_3==0)
                {
                    count++;
                }
            }
        }
    }

    std::cout << count << std::endl;

    return(0);
}