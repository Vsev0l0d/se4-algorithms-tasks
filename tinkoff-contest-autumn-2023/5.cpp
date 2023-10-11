#include <iostream>
#include <list>
#include <cstring>

using namespace std;

struct road {
    int to;
    int length;
};

int dfs(int v, list<road> roads[], int labels[], int n, int x, int state){
    if (labels[v]) return 0;
    labels[v] = state;
    for(road r : roads[v]){
        if (labels[r.to] == 0 && r.length > x) dfs(r.to, roads, labels, n, x, state);
    }
    return 1;
}

int count_states(list<road> roads[], int n, int x) {
    int state_labels[n], count = 0;
    memset(state_labels, 0, sizeof(state_labels));
    for (int i = 0; i < n; ++i) count += dfs(i, roads, state_labels, n, x, count + 1);
    return count;
}

int main() {
    int n, m, v, u, w, right = 0, left = 0;
    cin >> n >> m;
    list<road> roads[n];
    for (int i = 0; i < m; ++i) {
        cin >> v >> u >> w;
        --v, --u;
        roads[v].push_back({u, w});
        roads[u].push_back({v, w});
        if (right < w) right = w;
    }
    int number_of_states = count_states(roads, n, 0);
    while(left < right) {
        int middle = (left + right) >> 1;
        if (count_states(roads, n, middle) > number_of_states) right = middle;
        else left = middle + 1;
    }
    cout << left - 1 << endl;
    return 0;
}
