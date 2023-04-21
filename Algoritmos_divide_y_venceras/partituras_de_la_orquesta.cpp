#include <iostream>
#include <vector>

using namespace std;

int funcionTecho(const vector<int>& v,int i, int posSol) {
    
    return (v[i] % posSol) ? v[i] / posSol + 1 : v[i] / posSol;
}

bool coincidePartiturasConPosibleSolucion(const vector<int>& v, int partituras, int posSol) {
    int cuentaPartituras = 0;
    bool ret = false;
    for (int i = 0; i < v.size(); i++) {
        /*
        si hay grupos mas grandes que esa solucion, hacerlos mas pequeños y dar una partitura al grupo nuevo
        */
        cuentaPartituras += funcionTecho(v, i, posSol);
    }
    // definimos la validez de la solucion
    if (cuentaPartituras <= partituras) ret = true;
    return ret;
}

int busquedaSolucion(const vector<int>& v, int partituras, int ini, int fin) {
    int ret;
    int med = (fin + ini) / 2;
    bool valida = coincidePartiturasConPosibleSolucion(v, partituras, med);

    if (ini == fin) {
        ret = fin;
    }
    else {
        if (valida) {
            ret = busquedaSolucion(v, partituras, ini, med);
        }
        else {
            ret = busquedaSolucion(v, partituras, med+1, fin);
        }
    }

    return ret;
}


bool solve() {

    int p, n;
    cin >> p >> n;

    if (!cin)
        return false;

    int ini = 1;
    int fin = 0;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (fin < v[i]) fin = v[i];
    }

    int r = busquedaSolucion(v, p, ini, fin);

    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}