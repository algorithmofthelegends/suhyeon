#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> v;
	int sum = 0;
	int result = 0;
	// ���� �� �־��ֱ�
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		sum += n;
		v.push_back(sum);
	}

	for (int i = 1; i < 10; i++)
	{
		// ���� 100���� ū ���
		if (v[i] >= 100)
		{
			int a = v[i] - 100;
			int b = 100 - v[i - 1];
			// 100�� ���̰� ������ �� ū ��
			if (a == b)
				result = v[i];
			else // �ƴ� ��� �� ���� ���̰� ���� ��
				result = a < b ? v[i] : v[i - 1];
			
			break;
		}
		else // 100�� �ȵ� �� �� �� ���
		{
			result = v[9];
		}
	}
	cout << result;
}

