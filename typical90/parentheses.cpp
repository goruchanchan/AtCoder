#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

bool check(std::string S)
{
  bool result = true;
  int sum = 0;
  for(int i = 0;i<S.size();i++)
  {
    if(S[i]=='(')
    {
      sum += 1;
    }
    else
    {
      sum -= 1;
    }
    if(sum<0)
    {
      result = false;
    }
  }

  if(sum != 0)
  {
     result = false;
  }

  return(result);
}

int main() {

    // Step #1. 入力
  int N;
  cin >> N ;

  for(int i = 0;i<(1<<N);i++)
  {
    std::string keyword = "";

    for(int j = N-1;j>=0;j--)
    {
      if((i & (1<<j)) == 0 )//"("と")"の組み合わせを二進数で表現
      {
	keyword += "(";
      }
      else
      {
	keyword += ")";
      }
    }

    if(check(keyword) == true)
    {
      cout << keyword << endl;
    }
  }

  return 0;
}
