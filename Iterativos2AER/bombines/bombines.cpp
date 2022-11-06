#include <iostream>
#include <vector>

using namespace std;

int abso(int a) {
    if (a < 0) {
        return -a;
    }
    else {
        return a;
    }
}

int bombines(const vector<int>& v, int cont) {
    int ret = 0;
    int suma = 0;
    int sumb = cont;
    int min = 2147483647;

    for (int i = 0; i < v.size(); i++) {
        suma += v[i];
        sumb -= v[i];
        if (abso(suma - sumb) < min) {
            min = abso(suma - sumb); 
            ret = i+1;
        }
        
    }
    if (abs(cont) <= min){
        ret = 0;
    }
    return ret;
}


bool solve() {

    int n;
    cin >> n;
    if (n == 0)
        return false;

    vector<int> v(n);
    int cont = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        cont += v[i];
    }

    int r = bombines(v,cont);

    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}