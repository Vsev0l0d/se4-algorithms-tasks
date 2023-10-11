#include <iostream>

using namespace std;

int main() {
    int n, s, a, result = 0;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a <= s && result < a) result = a;
    }
    cout << result;
    return 0;
}