#include <iostream>
#include <vector>

using namespace std;

int sum(int n, int m) {
    if (m <= n +n ) {
        return 0;
    }

    int ret = 1 + sum(n, m/3) + sum(n, m-(m/3));
    return ret;
}

bool solve() {

    int n;
    cin >> n;
    int m;
    cin >> m;
    if (n == 0)
        return false;

    int r = sum(n,m);

    cout << r << endl;

    return true;
}

int main() {

    while (solve());

    return 0;
}