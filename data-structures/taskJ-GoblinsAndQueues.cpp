#include <iostream>
#include <list>
using namespace std;

list <int> first_half_q;
list <int> second_half_q;

void equalize_parts(){
    if (first_half_q.size() < second_half_q.size()){
        first_half_q.push_back(second_half_q.front());
        second_half_q.pop_front();
    } else if (first_half_q.size() > second_half_q.size() + 1){
        second_half_q.push_front(first_half_q.back());
        first_half_q.pop_back();
    }
}

int main() {
    int N, index;
    cin >> N;
    char mark;
    while (N-- > 0){
        cin >> mark;
        switch (mark){
            case '-':
                cout << first_half_q.front() << endl;
                first_half_q.pop_front();
                break;
            case '+':
                cin >> index;
                second_half_q.push_back(index);
                break;
            case '*':
                cin >> index;
                first_half_q.push_back(index);
                break;
        }
        equalize_parts();
    }
    return 0;
}