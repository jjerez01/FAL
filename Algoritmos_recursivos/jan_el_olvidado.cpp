#include <iostream>
#include <vector>

using namespace std;

int pobreton() {
    char n;
    cin >> n;
    int ret;
    
    if (n == '+') {
        ret = pobreton() + pobreton();
    }
    else if (n == '-') {
        ret = pobreton() - pobreton();
    }
    else if (n == '*') {
        ret = pobreton() * pobreton();
    }
    else if (n == '/') {
        ret = pobreton() / pobreton();
    }
    else {
        ret = n-48;
    }
    return ret;
}


void solve() {


    int r = pobreton();

    cout << r << endl;
}

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
         solve();
   
    return 0;
}