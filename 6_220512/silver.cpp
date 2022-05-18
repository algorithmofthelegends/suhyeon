#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int x, n;
	vector<int> v;
	vector<int> v_sum;

	int sum = 0;	// 기간내 방문자 수
	int start = 0;	// 시작일 인덱스
	int end = 0;	// 마지막일 인덱스
	int result = 0; // 최대 방문자 수 체크

	// 입력
	cin >> x >> n;
	for (int i = 0; i < x; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	// 처음 기간 n에 해당하는 합 더해주기
	for (int i = 0; i < n; i++)
	{
		sum += v[i];
	}
	v_sum.push_back(sum);

	// 다음에 해당하는 값 구해주기
	for (int i = 0; i < v.size()-n; i++)
	{
		start = i;
		end = n + i;

		sum -= v[start]; // 앞에꺼 지워줌
		sum += v[end];   // 뒤에꺼 더해줌
		v_sum.push_back(sum);
	}
	// 내림차순 정렬
	sort(v_sum.rbegin(), v_sum.rend());

	// 가장 많은 수의 개수 확인
	for (int i = 0; i < v_sum.size()-1; i++)
	{
		if (v_sum[i] == v_sum[i + 1])
			result++;
		else
			break;
	}
	// 출력
	if (v_sum[0] == 0)
		cout << "SAD";
	else
	{
		cout << v_sum[0] << endl;
		cout << result+1;
	}
}

