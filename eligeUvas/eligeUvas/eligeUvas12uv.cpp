#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool eligeUvas(int racimo[], int n, int& mejorSabor, int& mejorPiel) {
	int i = 0;
	mejorPiel = racimo[1]
	while (i + 1 < n) {
		if (racimo[i] > mejorSabor) {
			mejorSabor = i;
		}
		if (racimo[i + 1] < mejorPiel) {
			mejorPiel = i + 1;
		}
		i += 2;
	}
	i = 0;
	bool ret = false;
	while (i + 1 < n) {
		if (racimo[i] = mejorSabor && racimo[i + 1] = mejorPiel) {
			ret = true;
		}
		i += 2;
	}
	return ret;
}
int main() {
	long num;
	long racimo[10];
	long mejorSabor = 0;
	long mejorPiel = 0;
	int n = 0;
	cin >> num;
	while (num != 0) {
		racimo[n] = num;
		n++;
		cin >> num;
	}
	if (eligeUvas(racimo[], n, mejorSabor, mejorPiel)) {
		cout << mejorSabor << " " << mejorPiel << endl;
	}
	else {
		cout << "NO HAY MEJOR" << endl;
	}
}

