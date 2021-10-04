#include<iostream>
#include<vector>

using namespace std;

//vector
unsigned int A[2000][2000]={};
unsigned int B[2000][2000]={};
unsigned int Arow[2000]={};
unsigned int Acollum[2000]={};

int main()
{
    int H,W;
    //入力
    cin >> H >> W;
        
    unsigned int value;
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            cin >> value; 
            A[i][j] = value;
            Acollum[i] += value;//行成分の和を取る
            Arow[j] += value;//列成分の和を取る
        } 
    }

    //vector
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            B[i][j] = Acollum[i] + Arow[j] - A[i][j];//求める解は行の総和と列の総和を足したものから自身を引く
            cout << B[i][j] << " ";
        } 
        cout << endl;        
    }

}
