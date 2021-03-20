#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, min_diff = INT_MAX;
    cin >> n;
    int pile[n];
    for (int i = 0; i < n; i++) {
        cin >> pile[i];
        sum += pile[i];
    }

    const int32_t limit = pow(2,n) - 1;
    int sum_pile1 = 0;
    for (int i = 0; i < limit; i++, sum_pile1 = 0){
        for (int j = 0; j < n; j++) {
            if ((1 << j)  &  i) sum_pile1 += pile[j];
        }

        int diff = abs(2*sum_pile1 - sum);
        if (diff < min_diff) min_diff = diff;
    }
    cout << min_diff << endl;
    return 0;
}
