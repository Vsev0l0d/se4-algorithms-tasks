#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k;
    list <pair<int, int>> segment;
    for (int i = 0; i < n; i++){
        if (!segment.empty() && i - segment.front().first >= k) segment.pop_front();
        cin >> x;
        while (!segment.empty() && segment.back().second > x) segment.pop_back();
        segment.push_back({i, x});
        if (i + 1 >= k) cout << segment.front().second << " ";
    }
    return 0;
}