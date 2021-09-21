#include <iostream>
#include <string>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};
bool dp[100001];

int main() {
    string S;
    cin >> S;

    dp[0] = 1;
    for(int i = 0; i < S.size(); i++)
    {
        if(!dp[i])
        {
            continue; // 以降の処理をスキップ
        }
        for(string tmp : divide)
        {
            if(S.substr(i, tmp.size()) == tmp)
            { 
                dp[i + tmp.size()] = 1;// うまく切れたら次の切れ目に1セット
            }
        }
    }

    if(dp[S.size()]==1)
    {
        cout << "YES" << endl;        
    }
    else
    {
        cout << "NO" << endl;        
    }

    return 0;
}