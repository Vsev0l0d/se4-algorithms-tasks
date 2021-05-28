#include <iostream>
using namespace std;

void dfs(int v, uint32_t* graph, int* colors, int N, int* count, uint32_t limit, int type){
    colors[v] += 1;
    for(int i = 0; i < N; i++){
        uint32_t id = type ? (i * N + v) : (v * N + i);
        if (i != v && colors[i] == type && graph[id] <= limit)
            dfs(i, graph, colors, N, count, limit, type);
    }
    (*count)++;
}

int main() {
    int N, count = 0;
    cin >> N;
    uint32_t graph[N][N], l = UINT32_MAX, r = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
            if (i != j && l > graph[i][j]) l = graph[i][j];
            if (i != j && r < graph[i][j]) r = graph[i][j];
        }
    }
    int colors[N];
    for (int i = 0; i < N; i++) colors[i] = 0;

    while(true){
        uint32_t middle = (l + r) / 2;
        for (int i = 0; i < N; i++) colors[i] = 0;
        count = 0;
        if (N == 1) break;
        dfs(0, &graph[0][0], colors, N, &count, middle, 0);
        dfs(0, &graph[0][0], colors, N, &count, middle, 1);
        if (l >= r) break;
        if (count == 2*N) r = middle;
        else l = middle + 1;
    }
    if (count != 2*N) l = 0;
    cout << l;
    return 0;
}