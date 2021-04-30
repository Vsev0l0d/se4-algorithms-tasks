#include <iostream>
#include <set>
using namespace std;

int result = 0;

set<int> count(const set<int>& collection, int max_size){
    int prev = 0;
    set<int> single_elements;
    for(int curr : collection){
        if (curr - prev > 2) result++;
        else if (curr - prev == 2) single_elements.insert(curr - 1);
        prev = curr;
    }
    if (max_size - prev > 1) result++;
    else if (max_size - prev == 1) single_elements.insert(max_size);
    return single_elements;
}

int main() {
    int m, n, k, x, y;
    cin >> m >> n >> k;
    set<int> rows[m], columns[n];
    while(k--){
        cin >> x >> y;
        rows[x - 1].insert(y);
        columns[y - 1].insert(x);
    }

    for(set<int>& row : rows) row = count(row, n);
    for(set<int>& column : columns) column = count(column, m);
    for (int i = 0; i < m; i++){
        for (int singleton : rows[i]){
            if (columns[singleton - 1].find(i + 1) != columns[singleton - 1].end())
                result++;
        }
    }
    cout << result;
    return 0;
}