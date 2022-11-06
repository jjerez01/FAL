#include <iostream>
using namespace std;

void temperaturasExtremas(int v[] , int max, int& valles,int& picos) {
	int i = 0;
	int ret = 0;
	valles = 0;
	picos = 0;
	while (i < max) {
		
		if (i != 0 && i != max-1) {
			if (v[i - 1] < v[i] && v[i + 1] < v[i]) {
				picos++;
			}
			else if (v[i - 1] > v[i] && v[i + 1] > v[i]) {
				valles++;
			}
		}
		i++;
	}
	//cout << picos << " " << valles << endl;
	
}

void resuelveCaso() {
	int max;
	cin >> max;
	int t;
	int temp[10000];
	int valles;
	int picos;
	for (int i = 0; i < max; i++) {
		cin >> t;
		temp[i] = t;
	}
	temperaturasExtremas(temp,max,valles,picos);
	cout << picos << " " << valles << endl;

}

int main() {

	int casos;
	cin >> casos;
	for (int i = 0; i < casos; i++) {
		resuelveCaso() ;
	}
	return 0;

}