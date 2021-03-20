#include <iostream>
#include <unordered_map>
#include <stack>
#include <list>

using namespace std;

list<string> get_list(){
    list<string> l;
    return l;
}

int main() {
    unordered_map<string,stack<int>> map;
    stack<list<string>> changes;
    changes.push(get_list());
    string line;
    while (cin >> line){
        switch(line[0]){
            case '{':
                changes.push(get_list());
                break;
            case '}':
                for(const string& name : changes.top()) map[name].pop();
                changes.pop();
                break;
            default:
                int i = line.find('=');
                string variable1 = line.substr(0, i);
                string variable2 = line.substr(i + 1);
                if (isdigit(variable2[0]) || variable2[0] == '-') map[variable1].push(stoi(variable2));
                else {
                    if (map.find(variable2) == map.end() || map[variable2].empty()) map[variable2].push(0);
                    map[variable1].push(map[variable2].top());
                    cout << map[variable1].top() << endl;
                }
                changes.top().push_front(variable1);
                break;
        }
    }
    return 0;
}
