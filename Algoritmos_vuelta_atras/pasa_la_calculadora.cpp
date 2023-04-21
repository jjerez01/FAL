#include <iostream>
#include <vector>
using namespace std;
const int MAX = 31;

const vector<vector<int>> calculadora = { {7,8,9},{4,5,6},{1,2,3} };


bool gana( int suma, int filn, int coln) {

	if (suma >= 31) return false;
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == filn && j != coln) {
					if (gana(suma + calculadora[i][j], i, j)) return false;
				}
				else if (j == coln && i != filn) {
					if (gana(suma + calculadora[i][j], i, j)) return false;
				}
			}
		}

		return true;
	}

}

void resuelve() {
	int suma, numero, filn, coln;
	cin >> suma >> numero;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (numero == calculadora[i][j]) {
				filn = i;
				coln = j;
			}
		}
	}

	if (!gana( suma, filn, coln)) cout << "GANA\n";
	else cout << "PIERDE\n";
}

int main() {
	int nc;
	cin >> nc;
	for (int i = 0; i < nc; ++i) {
		resuelve();
	}
	return 0;
}