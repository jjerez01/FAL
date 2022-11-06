#include <iostream>
#include <vector>

using namespace std;


long long int erasmus(const vector<int> v) {
	long long int ret = 0;
	long long int res = 0;
	long long int suma = 0;
	for (int i = v.size() - 2; i >= 0; i--) {
		suma += v[i + 1];
		res = v[i] * suma;
		ret += res;
	}
	return ret;
}

bool solve() {
	int n;
	cin >> n;
	if (n == 0) {
		return false;
	}
	vector<int> v(n);
	for (int i = 0;i < n;i++) {
		cin >> v[i];
	}
	long long int r = erasmus(v);
	cout << r << endl;

	return true;
}

int main() {
	while (solve());
	return 0;
}