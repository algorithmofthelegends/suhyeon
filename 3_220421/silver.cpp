#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

bool visited[1001];
vector<int> graph[1001];

// dfs 메서드 정의
void dfs(int v)
{
    // 현재 노드 방문 처리
    visited[v] = true;
    cout << v << " ";
    // 현재 노드와 연결된 다른 노드를 재귀적으로 방문
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
    // 현재 노드를 방문 처리
    visited[v] = true;
    // 큐가 빌 때까지 반복
    while (!q.empty())
    {
        int curr = q.front();
        // 큐에서 원소 하나를 뽑아 출력하기
        q.pop();
        cout << curr << " ";
        // 아직 방문하지 않은 인접한 원소들을 큐에 삽입
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
    // 입력 ------------
    int n, m, v;
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    // 정렬
    for (int i = 1; i <= n; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    // 출력 ------------
    dfs(v);
    cout << endl;
    // 방문처리 초기화
    fill_n(visited, 1001, 0);
    bfs(v);
}