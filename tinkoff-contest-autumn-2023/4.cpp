#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    m *= 2, ++n;
    int a[m], total[n], for_each[n];
    for (int i = 0; i < m; i += 2) {
        cin >> a[i];
        a[i + 1] = a[i];
    }
    sort(a, a + m);
    total[0] = 0, for_each[0] = 0;
    for (int i = 1; i < n; ++i){
        total[i] = INT_MAX;
        for (int j = 0; j < m; ++j) {
            int c = i - a[j];
            if (c < 0) break;
            if (total[c] != INT_MAX && !(for_each[c] & (1 << j))) {
                if (total[i] > 1 + total[c]) {
                    total[i] = 1 + total[c];
                    for_each[i] = for_each[c] | (1 << j);
                }
            }
        }
    }
    --n;
    if (total[n] != INT_MAX) {
        cout << total[n] << endl;
        for (int i = 0; i < m; ++i) {
            if (for_each[n] & (1 << i)) cout << a[i] << " ";
        }
    } else cout << -1;
    return 0;
}