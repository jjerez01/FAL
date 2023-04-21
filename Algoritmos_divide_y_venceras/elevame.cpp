#include <iostream>
#include <vector>

using namespace std;

const int k = 31543;
/*
1000000 5
0 0
*/

int elevame(int a, int b) {
    int ret;
    if (b == 0) {
        return 1;
    }
    else if (b == 1) {
        int sol = a % k;
        return sol;
    }

    if (b % 2 == 0) {
        ret = elevame(a, b / 2) % k;
        ret = (ret * ret) % k;
    }
    else{
        ret = elevame(a, b / 2) % k;
        ret = (ret * ret) % k;
        ret = (ret * (a % k))%k;
    }
    return ret;
}


bool solve() {
    int a;
    cin >> a;
    int b;
    cin >> b;

    if (a == 0 && b == 0) {
        return false;
    }

    int r = elevame(a,b);
    
    printf("%d\n", r);


    return true;
}

int main() {


    while (solve());

    return 0;
}