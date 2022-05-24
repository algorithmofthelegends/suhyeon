#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> v;
	int sum = 0;
	int result = 0;
	// 합한 값 넣어주기
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		sum += n;
		v.push_back(sum);
	}

	for (int i = 1; i < 10; i++)
	{
		// 값이 100보다 큰 경우
		if (v[i] >= 100)
		{
			int a = v[i] - 100;
			int b = 100 - v[i - 1];
			// 100과 차이가 같으면 더 큰 수
			if (a == b)
				result = v[i];
			else // 아닐 경우 더 작은 차이가 나는 수
				result = a < b ? v[i] : v[i - 1];
			
			break;
		}
		else // 100이 안될 시 총 합 출력
		{
			result = v[9];
		}
	}
	cout << result;
}

