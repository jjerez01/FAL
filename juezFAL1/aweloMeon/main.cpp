#include <iostream>
using namespace std;


int awelo(int v[],int a,int b) {

	return 0;
}

int main() {
	int a;
	int b;
	int v[10000];
	int c;

	cin >> a;
	cin >> b;
	while (a != 0 || b != 0) {
		for (int i = 0; i < a; i++) {
			cin >> c;
			v[i] = c;
		}
		cout << awelo(v,a,b) << endl;
		cin >> a;
		cin >> b;
	}
	return 0;
}