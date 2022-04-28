#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = -1;

    for (int i = n / 5; i >= 0; i--)
    {
        // 전체에서 5kg 중량 빼주기
        int current = n - i * 5;
        // 3kg 중량 더해주기
        if (current % 3 == 0)
        {
            result = i + current / 3;
            break;
        }
    }
    cout << result << endl;
}

//int main()
//{
//	int n, m = 0;
//	int count = 0;
//	cin >> n;
//	m = n;
//
//	// 1. 5kg으로만 운반할 경우
//	if (n % 5 == 0)
//	{
//		count += n / 5;
//	}
//	else
//	{
//		while (m > 0)
//		{
//			count++;
//			m -= 5;
//			if (m % 3 == 0)
//			{
//				count += m / 3;
//				m = 0;
//				break;
//			}
//		}
//		// 5와 3으로 나눠졌는지 확인
//		if (m != 0)
//		{
//			// 3kg만 운반 또는 나머지
//			count = (n % 3 == 0) ? n / 3 : -1;
//		}
//	} 
//	cout << count << endl;
//}