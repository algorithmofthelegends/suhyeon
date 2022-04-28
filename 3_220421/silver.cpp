#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool visited[1001];
vector<int> graph[1001];

// dfs �޼��� ����
void dfs(int v)
{
    // ���� ��� �湮 ó��
    visited[v] = true;
    cout << v << " ";
    // ���� ���� ����� �ٸ� ��带 ��������� �湮
    for (int i = 0; i < graph[v].size(); i++)
    {
        int next = graph[v][i];
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

void bfs(int v)
{
    queue<int> q;
    q.push(v);
    // ���� ��带 �湮 ó��
    visited[v] = true;
    // ť�� �� ������ �ݺ�
    while (!q.empty())
    {
        int curr = q.front();
        // ť���� ���� �ϳ��� �̾� ����ϱ�
        q.pop();
        cout << curr << " ";
        // ���� �湮���� ���� ������ ���ҵ��� ť�� ����
        for (int i = 0; i < graph[curr].size(); i++)
        {
            int next = graph[curr][i];
            if (!visited[next])
            {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main()
{
    // �Է� ------------
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    // ����
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    // ��� ------------
    dfs(v);
    cout << endl;
    // �湮ó�� �ʱ�ȭ
    fill_n(visited, 1001, 0);
    bfs(v);
}