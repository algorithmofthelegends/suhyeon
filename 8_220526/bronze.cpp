#include <iostream>

using namespace std;

int main()
{

	int n, m, k;
	int num = 0;
	cin >> n >> m >> k;

	num = k - 3;
	
	// ����� ����
	if (num >= 0)
	{
		m += (num % n);
	}
	else // ������ ����
	{
		m += (num % n) + n;
		
	}
	// ���� �Ѿ�� �����ֱ�
	m = m > n ? m % n : m;
	m = m == 0 ? n : m;

	cout << m;
}

// 1  2  3  4  5  6  7
// 
//-10-9 -8 -7 -6 -5 -4 
//-3 -2 -1  0  1  2  3    
// 4  5  6  7  8  9 10 
//11 12 13 14


//  1  2  3  4  5  6
//  9 10 11 12 13 14
//  3  4  5  6  7  8
// -3 -2 -1  0  1  2
// -9 -8 -7 -6 -5 -4