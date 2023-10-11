#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, m, q, x, y, g_x, g_y;
    cin >> n >> m;
    int count[n], gang[n];
    list<int> gangs[n];
    for (int i = 0; i < n; ++i) {
        count[i] = 1;
        gang[i] = i;
        gangs[i].push_back(i);
    }
    for (int i = 0; i < m; ++i) {
        cin >> q >> x;
        switch(q) {
            case 1:
                cin >> y;
                g_x = gang[--x], g_y = gang[--y];
                if (g_x != g_y) {
                    for (int ghost : gangs[g_y]) gang[ghost] = g_x;
                    gangs[g_x].insert(gangs[g_x].end(), gangs[g_y].begin(), gangs[g_y].end());
                    for (int ghost : gangs[g_x]) ++count[ghost];
                    gangs[g_y] = {};
                }
                break;
            case 2:
                cin >> y;
                if (gang[--x] == gang[--y]) cout << "YES" << endl;
                else cout << "NO" << endl;
                break;
            case 3:
                cout << count[--x] << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
