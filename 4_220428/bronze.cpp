#include <iostream>
#include <vector>

using namespace std;

// ���ٹ� : �ð��ʰ� ���� ���� ū �Ҽ� ã��
int main()
{
	int n, k;
	cin >> n;
	cin >> k;

	int sum = 0;
	vector<int> v;

	// ���� �� ä��� : 1 ~ n
	for (int i = 0; i <= n; i++)
	{
		v.push_back(i);
	}

	// �����佺�׳׽��� ü
	for (int i = 2; i <= n; i++)
	{
		// �Ҽ��� �ƴ� ��
		if (v[i] != i)
		{
			//v[i] = 0;
			continue;
		}
		// �Ҽ��� �Ҽ� üũ
		for (int j = i; j <= n; j += i)
		{
			// ���⼭ ���� �ɸ�
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

