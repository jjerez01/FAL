#include <iostream>
#include <vector>

using namespace std;


bool moviles(bool& fin, int& p) {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int ret;
    if (a == 0 && b == 0 && c == 0 && d == 0) {
        fin = true;
        return false;
    }

    if (a != 0 && c != 0) {
        int sola = a * b;
        int solb = c * d;
        if (sola == solb) {
            p = a + b + c + d;
            return true;
        }
        else {
            return false;
        }
    }

    if (a == 0) {
        bool sol = moviles(fin, p);
        if (!sol) ret = false;
        else {
            a = p;
            p = 0;
            ret = true;
        }

    }
    if (c == 0) {
        bool sol = moviles(fin, p);
        if (!sol) ret = false;
        else {
            c = p;
            p = 0;
            ret = true;
        }
    }
    int sola = a * b;
    int solb = c * d;
    if (sola == solb && ret) {
        p = sola + solb;
        ret = true;
    }
    else {
        ret = false;
    }
    return ret;
}


bool solve() {

    bool fin = false;
    int p;
    bool r = moviles(fin, p);
    if (fin)return false;
    if (r) {
        cout << "SI" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return true;
}

int main() {

    while (solve());

    return 0;
}