#include <iostream>
#include <vector>
#include <string>


using namespace std;



/*casos prueba
1
1 1111011


2
3 1214212
10 91234


1
1 111111111111111
1
1 2
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
}

void solve() {


	int d;
	//scanf("%d\n",& d);
	cin >> d;
	
	if (d != 0) {
		string queen;
		cin >> queen;


		int r = bolsa(queen, d);
		printf("%d\n",r);
	}
	
}