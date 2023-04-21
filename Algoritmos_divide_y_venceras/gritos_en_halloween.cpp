#include <iostream>
#include <vector>

using namespace std;

long long cuentaLetras(long long n) {
    if (n == 1) {
        return 3;
    }

    long long ret = cuentaLetras(n-1);
    return 2 * ret + n + 2;
}

char gritos(long long w,long long pos,long long n) {
    char ret;
    if (w == 3) {
        if (pos == 1) {
            ret = 'B';
        }
        else if (pos == 2) {
            ret = 'U';
        }
        else {
            ret = 'H';
        }
        return ret;
    }
    long long med = n + 2;
    long long c1 = (w - med) / 2;
    if (pos <= c1) {
        gritos(c1, pos, n - 1);
    }
    else if (pos > c1 && pos <= c1 + med) {
        char ret;
        
        if (pos == c1+1) {
            ret = 'B';
        }
        else if (pos == c1 + med) {
            ret = 'H';
        }
        else {
            ret = 'U';
        }
        return ret;
        
    }
    else {
        gritos(c1, pos-(c1 + med), n - 1);
    }
}


bool solve() {

    long long n;
    cin >> n;
    long long pos;
    cin >> pos;

    if (!cin)
        return false;
    long long w = cuentaLetras(n);

    char sol = gritos(w,pos, n);

    cout << sol << endl;

    return true;
}

int main() {
    while (solve());
    return 0;
}