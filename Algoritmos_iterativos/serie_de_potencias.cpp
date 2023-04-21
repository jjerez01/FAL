#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int potencias(int a, int b) {
	int res = 1;
	int res2 = 1;
	for (int i = 1; i <= b; i++) {
		/*int f = pow(a , i);
		res += f;*/
		res2 *= a;
		res2 %= 1000007;
		res += res2;
		res %= 1000007;
	}
	return res % 1000007;
}

bool solve() {
	int a;
	int b;
	cin >> a;
	if (!cin) return false;
	cin >> b;
	int r = potencias(a, b);
	cout << r << endl;
	return true;

}

int main() {
	while (solve());
	return 0;
}