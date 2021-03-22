#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int prices[n];
    for (int i = 0; i < n; i++) cin >> prices[i];
    sort(prices, prices + n, greater<int>());
    int32_t total_price = 0;
    for (int i = 0; i < n; i++)
        if((i + 1) % k != 0) total_price += prices[i];
    cout << total_price << endl;
    return 0;
}