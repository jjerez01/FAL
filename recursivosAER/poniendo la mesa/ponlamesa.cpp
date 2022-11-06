#include <iostream>
#include <vector>

using namespace std;


int sum(int n,int v) {
    if (n == 0) {
        return 0;
    }
    int ret;
    if (v % 2 == 0) {
        ret = 1 + sum(n - 1, v +1);
    }
    else {
        if (n % 2 == 0) {
            ret = 1 + sum(n - 2, v + 1);
        }
        else {
            ret = 1 + sum(n - 1, v + 1);
        }
    }
    return ret;
}


bool solve() {

    int n;
    cin >> n;
    if (n == 0)
        return false;
    int v = 0;
    int r = sum(n,v);

    cout << r << endl;

    return true;
}

int main() {

    while (solve());

    return 0;
}