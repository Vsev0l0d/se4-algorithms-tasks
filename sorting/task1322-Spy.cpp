#include <iostream>
#include <algorithm>
using namespace std;

bool compare(const pair<int, char>& x1, const pair<int, char>& x2){
    return x1.second < x2.second;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    n--;

    pair<int, char> inv[s.size()];
    for (int i = 0; i < s.size(); i++){
        inv[i].first = i;
        inv[i].second = s[i];
    }
    stable_sort(inv, inv + s.size(), compare);

    char result[s.size()];
    for (int i = 0; i < s.size(); i++) {
        n = inv[n].first;
        result[i] = s[n];
    }
    for (char x : result) cout << x;
    return 0;
}