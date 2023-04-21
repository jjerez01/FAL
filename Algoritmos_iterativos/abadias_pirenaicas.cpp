#include <iostream>
#include <vector>

using namespace std;

int mont(const vector<int> v) {
	int max = 0;
	int ret = 0; 
	for (int i = v.size()-1;i > -1; i--) {
		
		if (v[i] > max) {
			max = v[i];
			ret++;
		}
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
	for (int i = 0;i < n; i++){
		cin >> v[i];
	}
	int r = mont(v);
	cout << r << endl;
	return true;
}

int main() {
	while (solve());
	return 0;
}