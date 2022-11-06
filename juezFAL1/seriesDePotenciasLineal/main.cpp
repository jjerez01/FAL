#include <iostream>
using namespace std;


int seriesDePotencias(int a, int b) {
	int ret = 1;
	int aux = 1;
	for (int i = 0; i < b; i++) {
		
		aux *= a;
		aux %= 1000007;
		ret += aux;
		ret %= 1000007;
	}
	return ret;
}

int main() {
	int a;
	int b;
	while (cin >> a) {
		cin >> b;
		cout << seriesDePotencias(a, b) << endl;
	}
	return 0;
}