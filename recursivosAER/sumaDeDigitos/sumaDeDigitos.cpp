#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sum(int n,vector<int> &op) {
    int nsuma = 0;
    
    if (n == 0) {
        return 0;
    }
    nsuma = n % 10;
    op.push_back(nsuma);
    
    int ret = nsuma + sum(n / 10,op);

    return ret;
}


bool solve() {
    int n;

    cin >> n;
    if (n < 0)
        return false;
    else if (n == 0) {
        printf("0 = 0\n");
        return true;
    }
    vector<int> op;
    int r = sum(n,op);

    for (int i = op.size() - 1; i > -1; i--) {
        cout << op[i];
        if (i == 0) {
            cout << " = ";
        }
        else {
            cout << " + ";
        }
    }
    cout << r << endl;

    return true;
}

int main() {
    while (solve());

    return 0;
}