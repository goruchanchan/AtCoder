#include <iostream>

int main()
{
    bool flag = false;
    int N;
    unsigned int Y;
    unsigned long i,j;

    std::cin >> N >> Y;

    for(i=0;i<=N && flag==false;i++)
    {
        for(j=0;j<=N-i && flag==false;j++)
        {
            if(Y == (10000 * i + 5000 * j + 1000 * (N-i-j) ) )
            {
                std::cout << i << " " << j << " " << N-i-j << std::endl;
                flag = true;
            }
        }
    }

    if(flag == false)
    {
        std::cout << "-1 -1 -1" << std::endl;
    }

}