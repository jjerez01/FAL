#include <iostream>
#include <vector>

using namespace std;

bool sum(long long int n, long long int&l) {
    if (n == 0) {
        return true;
    }

    bool ret = sum(n / 10, l);
    l++;
    if (n % l != 0 || !ret) {
        ret = false;
    }
    return ret;

}

bool solve() {

    long long int n;
    cin >> n;

    if (!cin)
        return false;
    long long int l = 0;
    bool r = sum(n,l);
    if(r) cout << "POLIDIVISIBLE" << endl;
    else {
        cout << "NO POLIDIVISIBLE" << endl;
    }

    return true;
}

int main() {

    while (solve());

    return 0;
}