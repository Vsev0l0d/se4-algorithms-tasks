#include <iostream>
#include <list>
using namespace std;

struct edge{
    int from, to;
    double rate, commission;
};

int main() {
    int N, M, S, A, B;
    double V, RAB, CAB, RBA, CBA;
    cin >> N >> M >> S >> V;
    list<edge> edges;
    S--;
    for (int i = 0; i < M; i++){
        cin >> A >> B >> RAB >> CAB >> RBA >> CBA;
        A--; B--;
        edges.push_back({A, B, RAB, CAB});
        edges.push_back({B, A, RBA, CBA});
    }

    double currency[N];
    for(int i = 0; i < N; i++) currency[i] = 0;
    currency[S] = V;

    for (int i = 0; i < N - 1; i++)
        for(edge x: edges)
            if ((currency[x.from] - x.commission) * x.rate > currency[x.to])
                currency[x.to] = (currency[x.from] - x.commission) * x.rate;

    for(edge x: edges)
        if ((currency[x.from] - x.commission) * x.rate > currency[x.to]){
            cout << "YES";
            return 0;
        }
    cout << "NO";
    return 0;
}