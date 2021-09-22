#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N;
    int t[100000]={0};
    int x[100000]={0};
    int y[100000]={0};
    int cur_x=0;
    int cur_y=0;
    bool goal = true;

    cin >> N ;
    for(int i=0;i<N;i++)
    {
        cin >> t[i] >> x[i] >> y[i];
    }

    int surplus = 0;
    int t_old = 0;
    for(int i=0;i<N;i++)
    {
        if( t[i]-t_old < (abs(x[i] - cur_x) + abs(y[i] - cur_y) ) )
        {
            goal = false;
        }
        else
        {
            surplus = (t[i] - t_old) - (abs(x[i] - cur_x) + abs(y[i] - cur_y) );

            if(surplus % 2 == 0)//いったんゴールについた後で、いったりきたりする
            {
                cur_x = x[i];
                cur_y = y[i];
            }
            else
            {
                goal = false;
            }
            t_old = t[i];
        }
    }

    if(goal == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return(0);
}