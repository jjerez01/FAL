#include <iostream>
#include <vector>


using namespace std;

//faltaria el caso en el que el numero seria el primero o ultimo numero y se dan 2 intentos y se adivina en el primero?
/*
1 10 5
5 5 3 4 6 8
0 0 0


*/

bool sum(int i, int f, int n) {
    bool ret = false;
    int times;
    int guess;
    cin >> times;
    for (int it = 0; it < times;it++) {

        cin >> guess;

        if (guess > n && guess <= f) {
            f = guess - 1;
        }
        else if (guess <= n && guess > i) {
            i = guess;
        }
    }
    if (i == f && i == n) {
        ret = true;
    }


    return ret;
}


bool solve() {
    // read case
    int i;
    cin >> i;
    int f;
    cin >> f;
    int n;
    cin >> n;

    if (i == 0 && f == 0 && n == 0) {
        return false;
    }

    bool r = sum(i, f, n);

    if (r) {
        printf("LO SABE\n");
    }
    else {
        printf("NO LO SABE\n");
    }


    return true;
}

int main() {


    while (solve());

    return 0;
}