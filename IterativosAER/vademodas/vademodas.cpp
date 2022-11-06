#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int modas(const vector<int> v) {
	
	int ret = 0;
	unordered_map<int,int> w;
	
	for (int i = 0; i < v.size(); i++) {
		w[v[i]]++;
	}
	int max = 0;
	for (auto i: w){
		if (max < i.second) {
			ret = i.first;
			max = i.second;
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
	for (int i = 0;i < n; i++) {
		cin >> v[i];
	}
	int r = modas(v);
	cout << r << endl;
	return true;
}

int main(){
	while (solve());
	return 0;
}