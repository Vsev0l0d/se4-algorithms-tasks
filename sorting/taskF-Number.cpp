#include <iostream>
#include <list>
using namespace std;

bool compare(const string& x1, const string& x2){return x1 + x2 > x2 + x1;}

int main() {
    list<string> data;
    string x;
    while (cin >> x) data.push_back(x);
    data.sort(compare);
    for(const string& x: data) cout << x;
    return 0;
}