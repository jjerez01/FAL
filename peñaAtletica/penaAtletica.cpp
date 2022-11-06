#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	int listas = 0;
	int lista[50];
	int numElem = 0;
	int res = 0;
	if (cargar(listas)) {
		for (int i = 0; i < listas; i++) {
			cargarListas(lista[],numElem);
			res = numPares(lista[], numElem);
			cout << "los numeros pares de la lista" << listas << "son" << res;
		}
	}
	return 0;
}

bool cargar(int& listas) {
	bool cargado;
	ifstream archivo("datos");

	if (!archivo) {
		cout << "no se ha podido cargar el archivo" << endl;
		cargado = false;
	}

	archivo >> listas;

	return cargado;
}
void cargarListas(int& lista[],int& numElem) {
	
	archivo >> numElem;
	for (int i = 0; i < numElem; i++) {
		archivo >> lista[i];
	}
}
int numPares(int lista[],int& numElem) {
	int ret = 0;
	int i = 0;
	while (i < numElem) {
		if (lista[i] % 2 == 0) {
			cont++;
		}
		i++;
	}
	return ret;
}














