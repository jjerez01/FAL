#include <iostream>
#include <vector>

using namespace std;

int cazar(vector<int> v, int s) {
	int max = 0;
	int cont = 0;
	int countdown = 0;

	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 1) {
			countdown = s;
			cont++;
			if (max < cont) { max = cont; }
		}
		else if (v[i] == 0 && countdown > 0) {
			countdown--;
			cont++;
		}
		else {
			cont = 0;
		}
	}

	return max;
}

bool solve() {
	int a;
	int s;
	cin >> a;
	cin >> s;
	if (a == 0 && s == 0) {
		return false;
	}
	vector<int> v(a);
	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}

	int r = cazar(v, s);

	cout << r << endl;

	return true;
}

int main() {
	while (solve());
	return 0;
}