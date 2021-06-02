#include <iostream>
#include <unordered_map>
#include <queue>
#include <set>
#include <list>
#include <cmath>
#define WIDTH 10
using namespace std;

struct vertex{
    int cost;
    int id;
};
bool operator< (const vertex &v1, const vertex &v2){return v1.cost > v2.cost;}

int matchPrefix(int64_t num1, int64_t num2){
    int count = 0;
    while(num1 != num2){
        num1 /= 10;
        num2 /= 10;
        count++;
    }
    return WIDTH - count;
}

int main() {
    int N, times[WIDTH];
    cin >> N;
    for (int & time : times) cin >> time;
    unordered_map<int64_t, int> numbers;
    int64_t ids[N];

    for (int i = 0; i < N; i++){
        cin >> ids[i];
        numbers[ids[i]] = i;
    }

    priority_queue<vertex> queue;
    queue.push({0, 0});
    vertex visited[N];
    for (int i = 0; i < N; i++) visited[i] = {-1, -1};

    while (!queue.empty()){
        auto curr = queue.top();
        queue.pop();
        if (curr.id == N - 1) break;

        multiset<vertex> vertices;
        int64_t x = ids[curr.id], new_x, pw, pw2;

        for (int j = 0; j < WIDTH; j++){
            pw = (int64_t) pow(10, j);
            int r = x / pw % 10;
            for (int d = 0; d < 10; d++){
                new_x = x - r * pw + d * pw;
                auto it = numbers.find(new_x);
                if (it != numbers.end())
                    vertices.insert({times[matchPrefix(x, new_x)], it->second});
            }
            for (int d = j + 1; d < WIDTH; d++){
                pw2 = (int64_t) pow(10, d);
                int r2 = x / pw2 % 10;
                new_x = x - r * pw + r2 * pw - r2 * pw2 + r * pw2;
                auto it = numbers.find(new_x);
                if (it != numbers.end())
                    vertices.insert({times[matchPrefix(x, new_x)], it->second});
            }
        }

        for (auto next : vertices){
            int new_cost = curr.cost + next.cost;
            if (visited[next.id].cost == -1 || visited[next.id].cost > new_cost){
                queue.push({new_cost, next.id});
                visited[next.id].cost = new_cost;
                visited[next.id].id = curr.id;
            }
        }
    }

    cout << visited[N - 1].cost << endl;
    if (visited[N - 1].cost == -1) return 0;
    list<int> way = {N - 1};
    int curr = N - 1;
    while (curr != 0){
        way.push_front(visited[curr].id);
        curr = visited[curr].id;
    }
    cout << way.size() << endl;
    for (int x : way) cout << x + 1 << " ";
    return 0;
}