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

		// ������ ������ ���� bȸ ����
		int num = 1;
		for (int i = 0; i < b; i++)
		{
			num *= a;
			num = num % 10;

		}
		// ���� 0�̸� 10���� ����
		num = num == 0 ? 10 : num;
		// ������ �� ���Ϳ� �־���
		v.push_back(num);
	}
	// ���Ϳ� �Էµ� �� ���
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}