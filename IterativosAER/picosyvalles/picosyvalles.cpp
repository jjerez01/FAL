#include <iostream>
#include<vector>

using namespace std;

int pyv(const vector<int> v, int &p, int &va) {
	p = 0;
	va = 0;
	for (int i = 1; i < v.size() - 1;i++) {
		if (v[i - 1] < v[i] && v[i + 1] < v[i]) p++;
		else if (v[i - 1] > v[i] && v[i + 1] > v[i]) va++;
	}
	return 0;
}

void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {

		cin >> v[i];
		
	}
	int p;
	int va;
	int r = pyv(v,p,va);
	cout  << p << " " << va << endl;
	
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}
	return 0;
}