#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void SeleccionDeUvas(
	vector<int>&v,
	int capacidad,
	int num,
	int k,
	int uvasComidas,
	int pesoAcumulado,
	int& sol
) {
	if (k == num) {
		if (uvasComidas == 12) {
			sol+=1;
		}
	}
	else {
		if (pesoAcumulado + v[k] <= capacidad) {
			SeleccionDeUvas(v, capacidad, num, k+1, uvasComidas+1, pesoAcumulado + v[k], sol);
		}
		SeleccionDeUvas(v, capacidad, num, k + 1, uvasComidas, pesoAcumulado , sol);
	}
}

bool resuelve() {
	int capacidad, num;
	cin >> capacidad >> num;

	if (capacidad == 0 && num == 0) {
		return false;
	}

	vector<int> v(num);
	for (int i = 0; i < num; ++i) {
		cin >> v[i];
	}

	
	int k = 0;
	int uvasComidas = 0;
	int pesoAcumulado = 0;
	int sol = 0;
	SeleccionDeUvas(v, capacidad, num, k, uvasComidas,pesoAcumulado,sol);
	cout << sol << endl;
	return true;
}

int main() {

	while(resuelve());

	return 0;
}