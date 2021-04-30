#include <iostream>
using namespace std;

struct tree {
    pair<int, int>* tr;
    tree(int n) {tr = new pair<int, int>[4 * n];}
    void build(int v, int l, int r) {
        if (l == r) tr[v] = make_pair(1, l + 1);
        else {
            int mid = (l + r) / 2;
            build(v * 2, l, mid);
            build(v * 2 + 1, mid + 1, r);
            tr[v].first = tr[v * 2].first + tr[v * 2 + 1].first;
        }
    }
    int erase(int v, int l, int r, int pos) {
        while (l != r){
            tr[v].first--;
            if (pos <= tr[v * 2].first){
                r = (l + r) / 2;
                v = v * 2;
            } else {
                pos -= tr[v * 2].first;
                l = (l + r) / 2 + 1;
                v = v * 2 + 1;
            }
        }
        tr[v].first--;
        return tr[v].second;
    }
};

int main() {
    int n, k;
    cin >> n >> k;
    tree tr(n);
    tr.build(1, 0, n - 1);
    for (int i = 0, curr = k; i < n; i++) {
        cout << tr.erase(1, 1, n, curr) << " ";
        if (i == n - 1) break;
        curr = (curr - 1 + k) % (n - 1 - i);
        if (curr == 0) curr = n - 1 - i;
    }
    return 0;
}