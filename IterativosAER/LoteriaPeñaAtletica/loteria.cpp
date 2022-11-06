#include <iostream>
#include <vector>

using namespace std;
int loteria(vector<int> v) {
	int res = 0;
	int i = 0;
	while (i < v.size()) {
		if (v[i] % 2 == 0) res++;
		i++;
	}
	return res;
}
void resuelvecaso() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];


	int r = loteria(v);

	cout << r << endl;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		resuelvecaso();
	}
	return 0;
}