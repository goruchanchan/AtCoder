#include<iostream>

int main()
{
    unsigned int N=0;
    unsigned int A_sum=0,B_sum=0; 
    unsigned int a[100]={0};

    std::cin >>N;

    for(int i = 0;i < N;i++)
    {
        std::cin >>a[i];
    }

    int tmp;
    for(int i = 0; i < N ;i++)
    {
        for(int j = 0; j < (N -1);j++)
        {
            if(a[j]>a[j+1])
            {
                tmp = a[j+1];
                a[j+1] = a[j];
                a[j] = tmp; 
            }
        }
    }

    int flag = 0;
    for(int i = N;i > 0;i--)
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

    std::cout << A_sum - B_sum << std::endl;

    return(0);

}
