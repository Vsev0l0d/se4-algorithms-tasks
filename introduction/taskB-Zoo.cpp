#include <iostream>
#include <string>
#include <stack>

int main() {
    std::string str;
    std::cin >> str;
    std::stack<char> data;
    int ids[str.size()/2];
    std::stack<int> animals;
    std::stack<int> traps;
    int count = 0;

    for (int i = 0; i < str.size(); i++){
        if (islower(str[i])){
            count++;
            animals.push(count);
        } else traps.push(i - count);

        if (data.empty() || str[i] == data.top()) data.push(str[i]);
        else if (tolower(str[i]) == tolower(data.top())){
            ids[traps.top()] = animals.top();
            traps.pop();
            animals.pop();
            data.pop();
        } else data.push(str[i]);
    }

    if (data.empty()){
        std::cout << "Possible" << std::endl;
        for (int id : ids)
            std::cout << id << " ";
        std::cout << std::endl;
    } else std::cout << "Impossible" << std::endl;
    return 0;
}
