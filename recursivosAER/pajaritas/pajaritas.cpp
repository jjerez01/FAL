#include <iostream>
#include <vector>

using namespace std;

int sum(int n,int m) {
    if (n < 10 || m < 10) {
        return 0;
    }
    int ret;
    if (n > m) {
        int d = n / m;
        ret = d + sum(n%m , m);
    }
    else {
        int d = m / n;
        ret = d + sum(n , m%n);
    }
    return ret;
}


bool solve() {

    int n;
    cin >> n;
    int m;
    cin >> m;
    if (n == 0 && m == 0)
        return false;

    int r = sum(n,m);

    cout << r << endl;

    return true;
}

int main() {

    while (solve());

    return 0;
}