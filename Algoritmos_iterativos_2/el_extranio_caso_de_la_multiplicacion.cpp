#include <iostream>
#include <vector>

using namespace std;


long long int erasmus(long long int altos,long long int bajos,long long int excep) {
	long long int ret;
	// (m-1)*m / 2
	ret = (altos+excep-1)*(altos+excep)/ 2 + (bajos+excep-1)*(bajos+excep) / 2;
	
	long long int quitar = (excep - 1) * excep / 2;
	ret -= quitar;
	
	return ret;
}

bool solve() {
	long long int n;
	cin >> n;
	if (n == 0) {
		return false;
	}
	vector<double> v(n);
	long long int altos = 0;
	long long int bajos = 0;
	long long int excep = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] < 1 && v[i]> 0) {
			bajos++;
		}
		else if(v[i] > 1) {
			altos++;
		}
		else {
			excep++;
		}
	}
	long long int r = erasmus(altos,bajos,excep);
	cout << r << endl;

	return true;
}

int main() {
	while (solve());
	return 0;
}