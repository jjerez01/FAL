#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool puedePlanta(const vector<vector<int>>& v, int planta_mas_alta,int med) {
    bool ret = false;
    int piso_actual = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i][2] <= med && piso_actual >= v[i][0]) {
            if (v[i][1] > piso_actual) { 
                piso_actual = v[i][1];
            }
        }
        if (piso_actual == planta_mas_alta) ret = true;
    }
    return ret;
}

int ascensores(const vector<vector<int>>& v, int planta_mas_alta, int ini,int fin) {
    int ret;
    int med = (fin + ini) / 2;

    bool puede = puedePlanta(v, planta_mas_alta, med);

    if (puede) {
        ret = ascensores(v, planta_mas_alta,ini,med);
    }
    else {
        if (ini + 1 == fin) {
            ret = fin;
        }
        else {
            ret = ascensores(v, planta_mas_alta, med, fin);
        }
    }
    return ret;
}


bool solve() {

    int n;
    cin >> n;

    if (!cin) return false;

    vector<vector<int>> v(n);

    int planta_mas_alta = 0;
    int ini = 0;
    int nivel_mas_alto = 0;


    for (int i = 0; i < n; ++i) {
        vector<int> aux(3);
        for (int j = 0; j < 3; j++) {
            cin >> aux[j];
        }
        v[i] = aux;
        if (v[i][1] > planta_mas_alta) planta_mas_alta = v[i][1];
        if (v[i][2] > nivel_mas_alto) nivel_mas_alto = v[i][2];
    }

    sort(v.begin(), v.end(),
        [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
    
    int fin = nivel_mas_alto;
    int r = ascensores(v,planta_mas_alta,ini,fin);

    cout << r << endl;

    return true;
}

int main() {

    while(solve());

    return 0;
}