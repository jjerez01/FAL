#include <iostream>
#include <vector>

using namespace std;

int dedos(const vector<int> v,int m) {
	int ret = 1;
	int a = 0; 
	int b = 0;

	while (b < v.size()) {
		if (v[b] - v[a]  < m) {
			b++;
		}
		else if (v[b] - v[a] >= m) {
			
			a++;
		}
		if (ret < b - a ) {
			ret = b - a;
		}
		
	}
	return ret;
}

bool solve() {
	int n;
	cin >> n;
	int m;
	cin >> m;

	if (n == 0 && m == 0) {
		return false;
	}
	vector<int> v(n);
	for (int i = 0; i < n;i++) {
		cin >> v[i];
	}

	int r = dedos(v, m);
	cout << r << endl;
	return true;
}

int main() {
	while (solve());
	return 0;
}