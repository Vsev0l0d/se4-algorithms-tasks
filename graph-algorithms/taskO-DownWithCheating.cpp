#include <iostream>
#include <list>
using namespace std;

bool bfs(short v, list<short>* graph, short* colors, short color){
    colors[v] = color;
    for(short next : graph[v]){
        if (colors[next] == 0){
            if (!bfs(next, graph, colors, (color == 2) ? 1 : 2)) return false;
        } else if (colors[next] == color) return false;
    }
    return true;
}

int main() {
    short N, M, x1, x2;
    cin >> N >> M;
    list<short> graph[N];
    short colors[N];
    for (short i = 0; i < N; i++) colors[i] = 0;

    for (short i = 0; i < M; i++){
        cin >> x1 >> x2;
        x1--; x2--;
        graph[x1].push_back(x2);
        graph[x2].push_back(x1);
    }

    bool result = true;
    for (short i = 0; i < N; i++){
        if (!result) break;
        if(colors[i] == 0) result = bfs(i, graph, colors, 1);
    }

    if (result) cout << "YES";
    else cout << "NO";
    return 0;
}