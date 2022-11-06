#include <iostream>
#include <vector>

using namespace std;

string sum(const vector<int>& v,int n) {
    string ret = "APTA";
    int min = -1;
    int max = 0;

    for (int i = 0; i < v.size(); ++i) {
        
        if (v[i] <= max || min == -1) {
            min = v[i];
        }
        max = v[i];
        if (max - min > n) {
            ret = "NO APTA";
        }
    }
        
    return ret;
}


bool solve() {
    int n;
    cin >> n;

    if (!cin)
        return false;
    int m;
    cin >> m;

    vector<int> v(m);
    for (int i = 0; i < m; ++i)
        cin >> v[i];
    
    string r = sum(v,n);
    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}