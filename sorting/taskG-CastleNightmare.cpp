#include <iostream>
#include <algorithm>
using namespace std;

int32_t weights[26];

bool compare(const char &x1, const char &x2){
    if (weights[x1 - 'a'] == weights[x2 - 'a']) return x1 > x2;
    return weights[x1 - 'a'] > weights[x2 - 'a'];
}

int main() {
    string s, result, heavy_letters;
    cin >> s;
    for (int32_t &weight : weights) cin >> weight;
    sort(s.begin(), s.end(), compare);

    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == s[i + 1] &&
        ((!heavy_letters.empty() && heavy_letters[heavy_letters.size() - 1] != s[i]) || heavy_letters.empty())){
            heavy_letters.push_back(s[i]);
            i++;
        } else result.push_back(s[i]);
    }
    if (s.size() > result.size() + 2*heavy_letters.size()) result.push_back(s[s.size() - 1]);
    cout << heavy_letters << result;
    for(int i = heavy_letters.size() - 1; i >= 0; i--) cout << heavy_letters[i];
    return 0;
}