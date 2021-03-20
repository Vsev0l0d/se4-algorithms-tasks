#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int x;
    cin >> n;
    int32_t sum[n];
    if (n > 0) cin >> sum[0];
    for (unsigned int i = 1; i < n; i++){
        cin >> x;
        sum[i] = x + sum[i - 1];
    }
    int32_t max = 0;
    int min = sum[0];
    for (unsigned int i = 0; i < n; i++) {
        if(min > sum[i]) min = sum[i];
        if(max < sum[i]) max = sum[i];
        if(max < sum[i] - min) max = sum[i] - min;
    };
    cout << max << endl;
    return 0;
}