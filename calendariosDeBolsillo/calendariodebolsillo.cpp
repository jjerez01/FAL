#include <iostream>
using namespace std;

int main() {
	unsigned int numCasos, i;

	cin >> numCasos;

	for (int i = 0; i < numCasos; i++) {
		casoprueba();
	}

	return 0;
}

int casoprueba() {
	int m, n, p;
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> n >> p;
		cbols(n,p);
	}
}

int cbols(int n, int p) {

}