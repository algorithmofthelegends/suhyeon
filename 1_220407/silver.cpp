#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, num, sum = 0;
	vector<int> nums;
	vector<int> result;

	// �Է�
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		nums.push_back(num);
	}
	// ���ӵǴ� k���� �µ��� ��
	for (int i = 0; i < n - k + 1; i++)
	{
		for (int j = i; j < i + k; j++)
		{
			sum += nums[j];
		}
		result.push_back(sum);
		sum = 0;
	}
	// ����
	sort(result.rbegin(), result.rend());
	cout << result[0];
}