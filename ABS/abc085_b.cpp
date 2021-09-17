#include<iostream>

int main ()
{
    unsigned int N,tmp,count=0;
    unsigned int  dia_var[100]={0};

    std::cin >> N ;
    for(unsigned int i=0;i<N;i++)
    {
        bool flag = true;

        std::cin >> tmp ;

        for(unsigned int j=0;j<i;j++)
        {
            if(dia_var[j]==tmp)
            {
                flag = false;
            }
        }
        if(flag == true)
        {
            dia_var[count] = tmp;
            count++;
        }
    }

    std::cout << count << std::endl;

    return(0);
}