#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

const string goal = "sheriff";
const int n = 'z' - 'a' + 1;

int main() {
    int s_counts[n]{}, g_counts[n]{};
    string s;
    cin >> s;
    for (char i : s) ++s_counts[i - 'a'];
    for (char i : goal) ++g_counts[i - 'a'];
    for (int i = 0; i < n; ++i) {
        if (g_counts[i] == 0) s_counts[i] = INT_MAX;
        else s_counts[i] /= g_counts[i];
    }
    cout << *minmax_element(begin(s_counts), end(s_counts)).first;
    return 0;
}