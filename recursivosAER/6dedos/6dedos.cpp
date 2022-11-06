#include <iostream>
#include <vector>

using namespace std;


int sum(int n,int c) {
    if (n == 0) {
        return 0;
    }
    
    int ret = sum(n / 6,c*10);
    int d = n % 6;
    
    ret += d * c;
    return ret;

}


void solve() {

    int n;
    cin >> n;
    int c = 1;
    int r = sum(n,c);

    cout << r << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();

    return 0;
}