#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){
	int n =1;
	int m;
	int mj = 30;

	cin >> n >> m;
	vector<mp::cpp_int> a(n);
	int b[mj];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < mj; i++) {
		b[i] = n-1;
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < m; i++) {
		int maxj = 0;
		mp::cpp_int max = 0;
		for (int j = 0; j < mj; j++) {
			if (a[b[j]] > max) {
				max = a[b[j]];
				maxj = j;
			}
		}
		a[b[maxj]] /= 2;
		if (a[b[maxj]] < a[b[maxj] - 1]) {
			b[maxj]--;
		}
	}

	mp::cpp_int res = 0;
	for (int i = 0; i < n; i++) {
		res += a[i];
	}

	cout << res;
	
	return 0;
}