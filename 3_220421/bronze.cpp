#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = -1;

    for (int i = n / 5; i >= 0; i--)
    {
        // ��ü���� 5kg �߷� ���ֱ�
        int current = n - i * 5;
        // 3kg �߷� �����ֱ�
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
//	// 1. 5kg���θ� ����� ���
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
//		// 5�� 3���� ���������� Ȯ��
//		if (m != 0)
//		{
//			// 3kg�� ��� �Ǵ� ������
//			count = (n % 3 == 0) ? n / 3 : -1;
//		}
//	} 
//	cout << count << endl;
//}