#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 100000000;

void getdist(int N, int start,vector<int>* G,int *dist) 
{
	// 幅優先探索（BFS）により、最短距離を計算
	for (int i = 1; i <= N; i++) 
	{
		dist[i] = INF;
	}

	queue<int> Q;
	Q.push(start);//queueに探索開始位置を教える
	dist[start] = 0;

	while (!Q.empty()) 
	{
		int pos = Q.front();//posにqueueの先頭の値を代入 
			  Q.pop();//queueから一つデータを取り出す
		for (int to : G[pos]) //配列Gの要素posのベクトル配列から順にたどる
		{
			if (dist[to] == INF) //初期代入されていない場合は、一つノード前の値に１加算し代入
			{
				dist[to] = dist[pos] + 1;
				Q.push(to);//次の探索情報をqueueにpushをプッシュ
			}
		}
	}
}

int main() 
{
	// 入力
	int N;
	int A[100001], B[100001];

	// グラフ
	vector<int> G[100001];
	int dist[100001];


	// Step #1. 入力
	cin >> N;
	for (int i = 1; i <= N - 1; i++) 
	{
		cin >> A[i] >> B[i];
		G[A[i]].push_back(B[i]);//A->Bの接続情報をGの始点側のベクトル配列に追加
		G[B[i]].push_back(A[i]);//B->Aの接続情報を終点側のベクトル配列に追加
	}

	// Step #2. 頂点 1 からの最短距離を求める
	// maxid1: 頂点 1 から最も離れている（最短距離が長い）頂点
	getdist(N,1,G,dist);
	int maxn1 = -1, maxid1 = -1;
	for (int i = 1; i <= N; i++) 
	{
		if (maxn1 < dist[i]) 
		{
			maxn1 = dist[i];
			maxid1 = i;//探索開始位置から最も深いノード番号を更新していく
		}
	}

	// Step #3. 頂点 maxid1 からの最短距離を求める
	// maxn2: 木の直径（最短距離の最大値）
	getdist(N,maxid1,G,dist);//Step1で最も深かったところから再度探索する。
	int maxn2 = -1;
	for (int i = 1; i <= N; i++) 
	{
		maxn2 = max(maxn2, dist[i]);//Step3で計算した深さの中で最も深いものを抽出
	}

	// Step #4. 出力
	cout << maxn2 + 1 << endl;//求める解は、最も深いもの同士を結線したものなので１加算
	return 0;
}
