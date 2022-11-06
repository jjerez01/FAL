#include <iostream>
#include <vector>

using namespace std;


int sum(const vector<int>& v) {
    int r = 0;
    int max = 1930;
    int min = 1990; 

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < min) min = v[i];
        if (v[i] > max) max = v[i];
    }
    r = max - min- (v.size() - 1);
        
    return r;
}


void solve() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int r = sum(v);

    cout << r << endl;
}

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();

    return 0;
}