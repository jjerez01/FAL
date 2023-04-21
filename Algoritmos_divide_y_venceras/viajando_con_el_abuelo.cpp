#include <iostream>
#include <vector>

using namespace std;

bool distanciaValida(const vector<int>& v, int paradas, int med) {
    int sum = 0;
    bool ret = true;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] + sum <= med) {
            sum += v[i];
        }
        else {
            if (paradas > 0 && v[i] <= med) {
                sum = v[i];
                paradas--;
            }
            else {
                ret = false;
            }
        }
    }
    return ret;
}

int viajes(const vector<int>& v, int paradas,int ini, int fin) {
    int ret;
    int med = (fin + ini) / 2;
    bool valida = distanciaValida(v, paradas,med);

    if (valida) {
        ret = viajes(v, paradas, ini, med);
    }
    else {
        if (ini + 1 == fin) {
            ret = fin;
        }
        else {
            ret = viajes(v, paradas, med, fin);
        }
    }
    
    return ret;
}


bool solve() {

    int n;
    cin >> n;
    int p;
    cin >> p;

    if (!cin)
        return false;

    int ini = 0;
    int fin = 0;

    vector<int> v(n);
    for (int i = 0; i < n; ++i){
        cin >> v[i];
        fin += v[i];
    }

    int r = viajes(v,p,ini,fin);

    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}