#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	int sum = 0;

	vector<int> v;

	// 입력
	cin >> n;
	m = n;
	while (n)
	{
		n--;
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
	}
	// 1번 게임
	for (int i = 0; i < v.size(); i += 3)
	{
		int k = v[i];
		for (int j = i + 3; j < v.size(); j += 3)
		{
			if (k == v[j])
			{
				v[j] = 0;
				v[i] = 0;
			}
		}
	}
	// 2번 게임
	for (int i = 1; i < v.size(); i += 3)
	{
		int k = v[i];
		for (int j = i + 3; j < v.size(); j += 3)
		{
			if (k == v[j])
			{
				v[j] = 0;
				v[i] = 0;
			}
		}
	}
	// 3번 게임
	for (int i = 2; i < v.size(); i += 3)
	{
		int k = v[i];
		for (int j = i + 3; j < v.size(); j += 3)
		{
			if (k == v[j])
			{
				v[j] = 0;
				v[i] = 0;
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = i * 3; j < i * 3 + 3; j++)
		{
			sum += v[j];
		}
		cout << sum;
		cout << endl;
		sum = 0;
	}
}

