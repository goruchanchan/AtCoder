#include<iostream>

int main()
{
    unsigned int N,A,B,tmp,sum=0;

    std::cin >> N >> A >> B;

    for(int i=0;i<=N;i++)
    {
        if(i<10)
        {
            tmp = i%10;
        }
        else if(i<100)
        {
            tmp = i%10 + ((i / 10) % 10);
        }
        else if(i<1000)
        {
            tmp = i%10 + ((i / 10) % 10) + ((i / 100) % 10);
        }
        else if(i<10000)
        {
            tmp = i%10 + ((i / 10) % 10) + ((i / 100) % 10) + ((i / 1000) % 10);
        }
        else
        {
            tmp = 1;
        }

        if(A<=tmp&&tmp<=B)
        {
            sum = sum + i;
        }
    }

    std::cout << sum << std::endl;

    return(0);

}