#include <iostream>
#include <vector>

using namespace std;

// 접근법 : 시간초과 없이 가장 큰 소수 찾기
int main()
{
	int n, k;
	cin >> n;
	cin >> k;

	int sum = 0;
	vector<int> v;

	// 벡터 값 채우기 : 1 ~ n
	for (int i = 0; i <= n; i++)
	{
		v.push_back(i);
	}

	// 에라토스테네스의 체
	for (int i = 2; i <= n; i++)
	{
		// 소수가 아닌 값
		if (v[i] != i)
		{
			//v[i] = 0;
			continue;
		}
		// 소수면 소수 체크
		for (int j = i; j <= n; j += i)
		{
			// 여기서 오래 걸림
			v[j] = i;
		}
	}

	for (int i = 1; i <= n; i++)
	{

	    //cout << v[i] << endl;
		
		if (v[i] <= k)
		{
			sum++;
		}

	}

	cout << sum;
}

