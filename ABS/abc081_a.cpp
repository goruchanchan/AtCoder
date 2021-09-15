#include<iostream>

int main()
{
    unsigned int tmp=0;
 
    std::cin >> tmp ;

    unsigned int count=0;

    for(int i=0;i<3;i++)
    {
        if(tmp % 10==1)
        {
            count++;
        }
        tmp /= 10;
    }

    std::cout << count << std::endl;

    return(0);
}