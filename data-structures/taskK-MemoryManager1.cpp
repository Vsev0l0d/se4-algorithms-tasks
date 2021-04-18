#include <iostream>
#include <map>
using namespace std;

multimap<int, int> blocks_by_size;
map<int, int> blocks;

void remove(const multimap<int, int>::iterator& it){
    blocks.erase(it->second);
    blocks_by_size.erase(it);
}
void remove_by_size(const map<int, int>::iterator& it){
    auto it_d = blocks_by_size.find(it->second);
    while (it_d->second != it->first) it_d++;
    blocks_by_size.erase(it_d);
    blocks.erase(it);
}
void insert(const pair<int, int>& pair){
    blocks.insert(pair);
    blocks_by_size.insert({pair.second, pair.first});
}

int main() {
    int n, m, k, index, size;
    cin >> n >> m;
    pair<int, int> history[m];
    insert({1, n});
    for (int i = 0; i < m; history[i] = {k, index}, i++){
        cin >> k;
        if (k > 0) {
            auto it = blocks_by_size.lower_bound(k);
            if (it == blocks_by_size.end()) index = -1;
            else {
                index = it->second;
                size = it->first - k;
                remove(it);
                if (size > 0) insert({index + k, size});
            }
            cout << index << endl;
        } else {
            int index_x = history[abs(k) - 1].second;
            int size_x = history[abs(k) - 1].first;
            if (index_x == -1) continue;

            auto it_r = blocks.lower_bound(index_x);
            auto it_l = blocks.end();
            if (it_r != blocks.begin()) it_l = prev(it_r);

            if (it_r != blocks.end() && it_r->first == index_x + size_x){
                if (it_l != blocks.end() && it_l->first + it_l->second == index_x) {
                    index = it_l->first;
                    size = it_l->second + it_r->second;
                    remove_by_size(it_l);
                    remove_by_size(it_r);
                    insert({index, size + size_x});
                } else {
                    size = it_r->second;
                    remove_by_size(it_r);
                    insert({index_x, size + size_x});
                }
            } else {
                if (it_l != blocks.end() && it_l->first + it_l->second == index_x) {
                    index = it_l->first;
                    size = it_l->second;
                    remove_by_size(it_l);
                    insert({index, size + size_x});
                } else insert({index_x, size_x});
            }

            index = 0;
        }
    }
    return 0;
}