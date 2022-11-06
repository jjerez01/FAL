#include <iostream>
#include <string>

using namespace std;


int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	while (a != 0 || b != 0) {
		if (a < b) {
			cout << "SENIL";
		}
		else {
			cout << "CUERDO";
		}
		cout << endl;
		
		cin >> a;
		cin >> b;
	}
	return 0;
}
