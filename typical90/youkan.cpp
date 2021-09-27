#include <iostream>
using std::cout;
using std::cin;
using std::endl;

long N, K, L;
long A[100000];

bool solve(long M)
{
    long cnt = 0, pre = 0;
    bool result = false;

    for (int i = 1; i <= N; i++)
    {
        if (A[i] - pre >= M && L - A[i] >= M) // 切ったあともM以上の長さかを確認 
	{
            cnt++;
            pre = A[i];
        }
    }
    if (cnt >= K)
    {
        result = true;//k個分カットできる
    }
    cout << "cnt = " << cnt << endl;

    return result;
}

int main() {
    // Step #1. 入力
    cin >> N >> L;
    cin >> K;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    
    // Step #2. 答えで二分探索（めぐる式二分探索法）
    // [参考]https://qiita.com/drken/items/97e37dd6143e33a64c8c
    long left = -1;
    long right = L + 1;
    while (right - left > 1)
    {
        long mid = left + (right - left) / 2;
	cout << "(left,middle,right) = ( " << left << "," << mid << "," << right << ") : " ; 
        if (solve(mid) == false)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << left << endl;
    return 0;
}
