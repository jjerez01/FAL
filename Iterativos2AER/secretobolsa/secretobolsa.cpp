#include <iostream>
#include <vector>
#include <string>

using namespace std;


/*casos prueba
1
1 1111011


2
10 91234
3 1214212

1
1 111111111111111
1
1 2

1
7 71118
*/

int bolsa(string q, int d) {
	int ret = 0;
	int cont = q[0]-48;
	int a = 0;
	int b = 0;
	while (b < q.length() ) {
		//cout << a << b << cont << "___" << ret << endl;
		if (cont == d) {
			if (b < q.length()) {
				ret++;
			}
		}
		if (cont <= d || a == b){
			b++;
			if (b < q.length()) {
				cont += (q[b] - 48);
			}
		}
		else {
			cont -= (q[a]-48);
			a++;
		}
		
	}
	return ret;
	/*int ret = 0;
	int suma = 0;
	int sumaant = 0;

	for (int i = 0; i < q.length(); i++) {
		
		suma += q[i] - 48;
		if (suma < d) {

		}
		else if (suma > d) {
			suma -= sumaant;
		}
		else if (suma == d) {
			ret++;

		}
		sumaant = suma;
	}
	return ret;*/
	//falla en 1 1 111111
}

void solve() {
	
	int d;
	cin >> d;

	string queen;
	cin >> queen;
			

	int r = bolsa(queen, d);
	cout << r << endl;


}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}
	return 0;
}
