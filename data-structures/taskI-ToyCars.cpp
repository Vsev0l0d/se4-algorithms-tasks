#include <iostream>
#include <unordered_set>
#include <list>
#include <queue>
#include <limits.h>
using namespace std;

int main() {
    int n, k, p, count = 0;
    cin >> n >> k >> p;

    list<int> entries[n];
    int history[p];
    for (int i = 0; i < p; i++) {
        cin >> history[i];
        entries[--history[i]].push_back(i);
    }

    unordered_set<int> cars;
    priority_queue<pair<int, int>> ids;
    for (int i = 0; i < p; i++){
        int curr = history[i];
        entries[curr].pop_front();

        if (cars.find(curr) == cars.end()){
            if (cars.size() >= k) {
                cars.erase(ids.top().second);
                ids.pop();
            }
            count++;
            cars.insert(curr);
        }
        if (entries[curr].empty()) ids.push({INT_MAX, curr});
        else ids.push({entries[curr].front(), curr});
    }
    cout << count << endl;
    return 0;
}