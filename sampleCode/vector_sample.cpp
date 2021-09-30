#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> G[3];

	for(int i=0;i<3;i++)
	{
		G[i].push_back(1);
		G[i].push_back(2);

		for(int j=0;j<G[i].size();j++)
		{
			cout << G[i].at(j) << endl;	
		}
	}
}
