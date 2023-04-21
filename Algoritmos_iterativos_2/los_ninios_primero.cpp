#include <iostream>
#include <vector>


using namespace std;

int malditoninio(const vector<int>& v) {
    int ret = 1;
    int max = -1;
    int posmax = 0;
    for (int i = 0; i < v.size(); i++) {
        if (max == -1) {
            max = v[i];
        }
        if (v[i] > posmax) {
            posmax = v[i];
        }
        if (v[i] <= max) {
            ret = i + 1;
            max = posmax;
        }

    }
    return ret;
}

bool solve() {

    int n;
    cin >> n;
    if (n == 0)
        return false;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int r = malditoninio(v);

    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}