#include <iostream>

using namespace std;

void toestoeracampo(int n, int m) {
	if (n < m) {
		cout << "SENIL" << endl;
	}
	else {
		cout << "CUERDO" << endl;
	}
}
bool resuelveCaso() {
	int m, n;
	cin >> n >> m;
	if (n == 0 && m == 0) {
		return false;
	}

	toestoeracampo(n, m);

	return true;
}

int main() {
	while (resuelveCaso());
	return 0;
}

