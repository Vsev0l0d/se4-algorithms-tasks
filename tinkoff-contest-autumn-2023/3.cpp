#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], l = n, r = 0;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) {
            r = i;
            if (l > i) l = i;
        }
    }
    if (l != n) {
        sort(a + l, a + r + 1);
        for (int i = l; i <= r; ++i) {
            if (a[i] != b[i]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}