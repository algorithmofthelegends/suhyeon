#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int m, n, sum = 0;
    int sumW, sumB = 0;
    vector<string> v;
    vector<int> result;
    bool find = true;

    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    // row
    for (int r = 0; r <= m - 8; r++)
    {
        // column
        for (int c = 0; c <= n - 8; c++)
        {
            for (int i = r; i < r + 8; i++)
            {
                for (int j = c; j < c + 8; j++)
                {
                    // 같은 문자 위치 : 행 - 홀수, 열 - 홀수 || 행 - 짝수, 열 - 짝수  
                    if (((i - r) % 2 != 0 && (j - c) % 2 != 0) || ((i - r) % 2 == 0 && (j - c) % 2 == 0))
                    {
                        sumW += (v[i][j] == 'W') ? 0 : 1;
                        sumB += (v[i][j] == 'B') ? 0 : 1;
                    }
                    else // 같은 문자 위치가 아닐 때
                    {
                        sumW += (v[i][j] == 'B') ? 0 : 1;
                        sumB += (v[i][j] == 'W') ? 0 : 1;
                    }
                }
            }
            sum = min(sumW, sumB);
            result.push_back(sum);
            sumW = 0;
            sumB = 0;
        }
    }
    // 정렬 및 출력
    sort(result.begin(), result.end());
    cout << result[0];
}