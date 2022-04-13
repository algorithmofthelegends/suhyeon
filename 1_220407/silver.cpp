#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, num, sum = 0;
	vector<int> nums;
	vector<int> result;

	// 입력
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		nums.push_back(num);
	}
	// 연속되는 k일의 온도의 합
	for (int i = 0; i < n - k + 1; i++)
	{
		for (int j = i; j < i + k; j++)
		{
			sum += nums[j];
		}
		result.push_back(sum);
		sum = 0;
	}
	// 정렬
	sort(result.rbegin(), result.rend());
	cout << result[0];
}