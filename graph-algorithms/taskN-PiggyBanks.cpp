#include <iostream>
#include <list>
using namespace std;

void dfs(int v, pair<list<int>, int>* graph, int * count){
    graph[v].second = 1;
    for(int next : graph[v].first){
        if (graph[next].second == 0) dfs(next, graph, count);
        else if (graph[next].second == 1) (*count)++;
    }
    graph[v].second = 2;
}

int main() {
    int n, key, count = 0;
    cin >> n;
    pair<list<int>, int> graph[n];
    for (int i = 0; i < n; i++) {
        cin >> key;
        graph[--key].first.push_back(i);
    }

    for (int i = 0; i < n; i++)
        if (graph[i].second == 0) dfs(i, graph, &count);
    cout << count;
    return 0;
}