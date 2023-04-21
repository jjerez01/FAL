#include <iostream>
#include <vector>

using namespace std;

const int k = 46337;
/*
1000000 5
0 0
*/

void fibo(int n,int& a,int &b,int &c,int &d) {
    int newa;
    int newb;
    int newc;
    int newd;
    if (n == 1) {
        a = 0;
        b = 1;
        c = 1;
        d = 1;
    }
    
    else {
        if (n % 2 == 0) {
            fibo(n / 2, a, b, c, d);
            newa = (a * a)%k + (b * c)%k;
            newb = (a * b)%k + (b * d)%k;
            newc = (c * a)%k + (d * c)%k;
            newd = (c * b)%k + (d * d)%k;
            a = newa % k;
            b = newb % k;
            c = newc % k;
            d = newd % k;
        }
        else {
            fibo(n / 2, a, b, c, d);
            newa = (a * a) % k + (b * c) % k;
            newb = (a * b) % k + (b * d) % k;
            newc = (c * a) % k + (d * c) % k;
            newd = (c * b) % k + (d * d) % k;
            a = newa%k;
            b = newb%k;
            c = newc%k;
            d = newd%k;

            newa = a * 0 + b * 1;
            newb = a * 1 + b * 1;
            newc = c * 0 + d * 1;
            newd = c * 1 + d * 1;
            a = newa % k;
            b = newb % k;
            c = newc % k;
            d = newd % k;

        }
    }

}


bool solve() {
    int n;
    cin >> n;

    if (n == 0) {
        return false;
    }
    int a;
    int b;
    int c;
    int d;

    fibo(n,a,b,c,d);

    printf("%d\n", c);


    return true;
}

int main() {


    while (solve());

    return 0;
}