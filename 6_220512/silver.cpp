#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int x, n;
	vector<int> v;
	vector<int> v_sum;

	int sum = 0;	// �Ⱓ�� �湮�� ��
	int start = 0;	// ������ �ε���
	int end = 0;	// �������� �ε���
	int result = 0; // �ִ� �湮�� �� üũ

	// �Է�
	cin >> x >> n;
	for (int i = 0; i < x; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	// ó�� �Ⱓ n�� �ش��ϴ� �� �����ֱ�
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
	}
	v_sum.push_back(sum);

	// ������ �ش��ϴ� �� �����ֱ�
	for (int i = 0; i < v.size()-n; i++)
	{
		start = i;
		end = n + i;

		sum -= v[start]; // �տ��� ������
		sum += v[end];   // �ڿ��� ������
		v_sum.push_back(sum);
	}
	// �������� ����
	sort(v_sum.rbegin(), v_sum.rend());

	// ���� ���� ���� ���� Ȯ��
	for (int i = 0; i < v_sum.size()-1; i++)
	{
		if (v_sum[i] == v_sum[i + 1])
			result++;
		else
			break;
	}
	// ���
	if (v_sum[0] == 0)
		cout << "SAD";
	else
	{
		cout << v_sum[0] << endl;
		cout << result+1;
	}
}

