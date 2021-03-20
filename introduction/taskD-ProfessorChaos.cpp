#include <iostream>

int main() {
    int a;
    short b, c, d;
    long k;
    std::cin >> a >> b >> c >> d >> k;

//    a - число бактерий
//    b - новых бактерий, вместо одной старой
//    с - уничтожаются
//    d - сколько помещается в контейнер (остальные уничтожаются)
//    k - номер дня эксперемента

    short previous = -1;
    for (int i = 1; i <= k; i++, previous = a){
        a = a*b - c;
        if (a > d) a = d;
        if (a <= 0) {
            a = 0;
            break;
        }
        if (a == previous) break;
    }

    std::cout << a << std::endl;
    return 0;
}


