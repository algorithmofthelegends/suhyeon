#include <iostream>
#include <vector>

using namespace std;

// ��Ŭ���� ȣ����
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

	// �� �� ū �� ã���ֱ�
	a > b ? (x = a , y = b) : (x = b, y = a);

	while (true)
	{
		// �� ���� ���� ������
		z = x % y;
		if (z == 0)
		{
			break;
		}
		// �ݺ��� ���� �� ����
		x = y;
		y = z;
	}
	cout << y << endl;
	cout << (a / y) * (b / y) * y;
}

