#include <iostream>
using namespace std;

int main() {
    int n, x1 = -1, x2 = -1, x;
    int first = 1, last = 1;
    int max = 0, start = 1;

    std::cin >> n;
    for (int i = 1; i <= n; i++, x1 = x2, x2 = x){
        std::cin >> x;
        if (x == x1 & x == x2 & x1 > 0 & x2 > 0){
            start = i - 1;
        }

        if (i - start + 1 > max){
            max = i - start + 1;
            first = start;
            last = i;
        }
    }
    std::cout << first << " " << last << std::endl;
    return 0;
}
