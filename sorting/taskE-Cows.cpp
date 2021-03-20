#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int64_t coordinates[n];
    for (int i = 0; i < n; i++) cin >> coordinates[i];

    int64_t left = 0;
    int64_t right = coordinates[n-1] - coordinates[0] + 1;
    while(left < right){
        int64_t middle = (left + right) >> 1;
        int64_t last = coordinates[0];
        int count = 1;
        for (int i = 1; i < n; i++){
            if (coordinates[i] - last > middle){
                last = coordinates[i];
                count++;
            }
        }
        if (count >= k) left = middle + 1;
        else right = middle;
    }
    cout << left << endl;
    return 0;
}