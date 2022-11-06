#include <iostream>
#include <vector>

using namespace std;


string sum(int n,int m) {
    string r = "CUERDO";
    if (n < m) r = "SENIL";
    return r;
}

bool solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    if (n == 0 && m == 0)
        return false;

    string r = sum(n,m);

    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}