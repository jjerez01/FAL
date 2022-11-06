#include <iostream>

using namespace std;


int resuelveCaso() {
	int numeros;
	cin >> numeros;
	int numero;
	int ret = 0;
	for (int i = 0; i < numeros; i++) {
		cin >> numero;
		if (numero % 2 == 0) {
			ret++;
		}
	}
	return ret;
	
}


int main() {
	int casos;
	
	cin >> casos;
	
	for (int i = 0; i < casos; i++) {
		cout << resuelveCaso() << endl;
	}
	return 0;
}