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
	int n=1;
	int CONST = 998244353;
	cin >> n;
	vector<mp::cpp_int> v(n);

	for (int i = 0; i<n-1; i++) {
		v[i] = 0;o
	}

	for (int i = 0; i<n; i++) {
		int x = 0;
		cin >> x;
		if ((i == 0 && x != 0) || (i != 0 && x == 0)) {
			cout << 0;
			return 0;
		}
		v[x]++;
	}

	int max_idx = 0;
	for (int i = n-1; i>=0; i--) {
		if (v[i] != 0) {
			max_idx = i;
			break;
		}
	}

	mp::cpp_int ret = 1;
	for (int i = 1; i < max_idx; i++) {
		mp::cpp_int idx = v[i + 1];
		for (int j = 0; j < idx; j++) {
			ret = ret * v[i] % CONST;
		}
	}

	cout << ret;

	return 0;
}