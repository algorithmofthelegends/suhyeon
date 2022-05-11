#include <iostream>
#include <vector>

using namespace std;

// 유클리드 호제법
//1980, 168  -> 1980 = 168 * 11 + 132
// 168, 132  ->  168 = 132 * 1 + 36
// 132, 36   ->  132 = 36 * 3 + 24
//  36, 24   ->   36 = 24 * 1 + 12
//  24, 12   ->   24 = 12 * 2 + 0

int main()
{

	int a, b;
	int x, y, z = 0;
	cin >> a >> b;

	// 둘 중 큰 수 찾아주기
	a > b ? (x = a , y = b) : (x = b, y = a);

	while (true)
	{
		// 두 수로 나눈 나머지
		z = x % y;
		if (z == 0)
		{
			break;
		}
		// 반복을 위한 값 변경
		x = y;
		y = z;
	}
	cout << y << endl;
	cout << (a / y) * (b / y) * y;
}

