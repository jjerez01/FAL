#include <iostream>
#include <vector>

using namespace std;

/*
2
3 4
2
EMBARQUE 0
CONSULTA 2
10
0 1 0 2 0 3 0 4 0 5
5
CONSULTA 1
CONSULTA 2
EMBARQUE 0
CONSULTA 1
CONSULTA 2
10
1 0 2 0 3 0 4 0 5 0
5
CONSULTA 1
CONSULTA 2
EMBARQUE 0
CONSULTA 1
CONSULTA 2
6
1 2 3 4 5 0
5
CONSULTA 1
CONSULTA 2
EMBARQUE 0
CONSULTA 1
CONSULTA 2
1 
1
2
EMBARQUE 0
CONSULTA 1
1
1
2
EMBARQUE 1
CONSULTA 1
10
0 0 0 0 0 0 0 0 0 0
2
EMBARQUE 0
CONSULTA 1
7
1 2 0 0 2 1 2
2
EMBARQUE 0
CONSULTA 5
8
1 0 2 0 3 4 0 5
2
EMBARQUE 0
CONSULTA 1
0

*/

int embarque(vector<int>& v,int cab, string orden, int &ind) {
    int ret = -1;
    if (orden == "CONSULTA") {
        if (cab-1 < ind) {
            ret = v[cab - 1];
        }
    }
    else if (orden == "EMBARQUE") {
       //swapeamos elementos con ventana deslizante
        int a = 0;
        int b = 0;
        int nuevind = 0;

        while (b < ind) {

            if (v[a] == cab && v[b] != cab) {
                int aux = v[b];
                v[b] = v[a];
                v[a] = aux;
                nuevind++;
                b++;               
            }
            else if (v[b] == cab||a == b) {
                if (v[b] != cab) { nuevind++; }
                b++;
            }
            else if (v[a] != cab) {
                a++;
            }
            else if (v[b] != cab) { nuevind++; }
        }
            ret = nuevind;
            ind = nuevind;

    }
    return ret;
}

bool solve() {

    int n;
    cin >> n;
    if (n == 0)
        return false;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int c;

    cin >> c;
    string orden;
    int cab;
    int ind = v.size();
    for (int i = 0; i < c; i++) {
        cin >> orden;
        cin >> cab;
        
        
        int r = embarque(v, cab,orden,ind);
        cout << r << endl;
    }
    cout << "*" << endl;


    return true;  
}

int main() {

    while (solve());

    return 0;
}