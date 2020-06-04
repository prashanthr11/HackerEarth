#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int n;
	cin >> n;
	vector<int> a(100001, 0);
	for(int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		a[t]++;
	}
	int k;
	cin >> k;
	for(auto i = 0; i < a.size(); ++i) {
		if(a[i] == k) {
			cout << i << endl;
			break;
		}
	}
}
