#include <iostream>

using namespace std;

int main() {
	int numCasos;
	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		resuelveCaso();
	}
}

void resuelveCaso() {
	int a,b;
	cin >> a;
	b = ultNumFactorial(a);
	cout << b << endl;
}

int ultNumFactorial(int a) {
	int ret = 1;
	int i = 0;

	while (i < a) {
		ret *= i;
	}
	ret = ret % 10;
	
	return ret;
}