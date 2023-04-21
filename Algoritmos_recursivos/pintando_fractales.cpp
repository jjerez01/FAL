#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int frac(int n,int elev) {
    if (n == 0) {
        return 0;
    }
    int sol = n * 4 * pow(4,elev);
    elev++;
    int ret = sol + frac(n / 2,elev);
    return ret;
}

bool solve() {

    int n;
    cin >> n;
    if (!cin)
        return false;
    int elev = 0;
    int r = frac(n,elev);

    cout << r << endl;

    return true;
}

int main() {
    
    while (solve());

    return 0;
}