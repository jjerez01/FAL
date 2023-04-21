#include <iostream>
#include <vector>
#include <stack>

using namespace std;


bool linterna(vector<int>& v, int ini, int fin, int& max, int& min) {
    bool ret = false;

    max = v[ini];
    min = v[ini];
    int maxind = ini;
    for (int i = ini; i < fin + 1; i++) {
        if (max < v[i]) {
            max = v[i];
            maxind = i;
        }
        if (min > v[i]) {
            min = v[i];
        }
    }


    if (fin - ini < 2) {

        return false;
    }
    else {
        
        int maxder,minder,maxiz,miniz;

        if (ini == maxind) ret = linterna(v, maxind + 1, fin, maxder, minder);
        else if (fin == maxind) ret = linterna(v, ini, maxind - 1, maxiz, miniz);
        else {
            bool iz = linterna(v, ini, maxind - 1, maxiz, miniz);

            bool der = linterna(v, maxind + 1, fin, maxder, minder);

            if (miniz < maxder || der || iz) {
                ret = true;
            }
        }

        return ret;
    }
}


bool solve() {

    int n;
    cin >> n;
    vector<int> v;

    if (!cin) {
        return false;
    }
    int aux;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }

    int max, min;

    bool w = linterna(v, 0, n-1, max, min);

    if (w) {
        cout << "ELEGIR OTRA" << endl;
    }
    else {
        cout << "SIEMPRE PREMIO" << endl;
    }

    return true;
}

int main() {
    while (solve());
    return 0;
}