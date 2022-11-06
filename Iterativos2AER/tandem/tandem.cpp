
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long int tandem(vector<int>& v,int m) {

    sort(v.begin(), v.end());

    long long int a = 0;
    long long int b = v.size()-1;
    long long int parejas = 0;

    while (a != b) {
        if (v[a] + v[b] <= m) {
            parejas += b - a;
            a++;
        }
        else {
            b--;
        }
    }
    return parejas;

}

bool solve() {
    int n;
    cin >> n;
    long long int m;
    cin >> m;
    if (n == 0 && m == 0)
        return false;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

   long long int r = tandem(v,m);

    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}