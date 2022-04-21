#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		// 제곱후 나머지 연산 b회 진행
		int num = 1;
		for (int i = 0; i < b; i++)
		{
			num *= a;
			num = num % 10;

		}
		// 값이 0이면 10으로 변경
		num = num == 0 ? 10 : num;
		// 마지막 값 벡터에 넣어줌
		v.push_back(num);
	}
	// 벡터에 입력된 값 출력
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}