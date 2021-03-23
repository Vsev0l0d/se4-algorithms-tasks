#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

bool compare(const pair<int, int>& x1, const pair<int, int>& x2){
    return x1.second > x2.second;
}

int main() {
    short k;
    cin >> k;
    pair<short, short> ns[k];
    for (short i = 0; i < k; i++) {
        cin >> ns[i].second;
        ns[i].first = i + 1;
    }
    sort(ns, ns + k, compare);
    list<short> result;
    int j = k - 1;
    for (int i = 0; i < j;){
        while (i < j && ns[i].second < 1) i++;
        if (i != j && ns[i].second-- > 0) result.push_back(ns[i].first);
        while (i < j && ns[j].second < 1) j--;
        if (i != j && ns[j].second-- > 0) result.push_back(ns[j].first);
    }
    for (short x : result){
        cout << x << " ";
        if (ns[j].second-- > 0) cout << ns[j].first << " ";
    }
    while (ns[j].second-- > 0) cout << ns[j].first << " ";
    return 0;
}