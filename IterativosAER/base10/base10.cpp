#include <iostream>
#include <vector>

using namespace std;


string sum(string n) {
    string r = "";
    bool cerito = false;
    int i = 0;
    while (i < n.size()) {
        if (cerito) {
            r += "0";
            cerito = false;
        }
        else {
            r += n[i];
            cerito = true;
            i++;
        }
    }
    return r;
}


bool solve() {
    // read case
    string n;
    cin >> n;
    // The boolean value of cin indicates if the last read was successful
    // (you need to read something before checking it!) 
    if (!cin)
        return false;

    // compute solution
    string r = sum(n);

    // write solution
    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}
