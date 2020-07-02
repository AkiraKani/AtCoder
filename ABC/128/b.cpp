#include <algorithm>
#include <bitset>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/range/irange.hpp>
#include <cmath>
#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> v(m);
	vector<int> p(m);
	int num = pow(2,n);

	for (int i = 0; i<m; i++) {
		int k, x;
		cin >> k;
		x = 0;
		for (int j = 0; j < k; j++) {
			int s;
			cin >> s;
			x |= (1 << s);
		}
		v[i] = x;
	}

	for (int i = 0; i < m; ++i) {
		cin >> p[i];
	}

	int count = 0;
	for (int i = 0; i < num; ++i) {
		for (int j = 0; j < m; ++i) {
			if (__builtin_popcount(i & v[j]) % 2 != p[j]) {
				break;
			}
			if (j == m - 1) {
				count++;
			}
		}
	}

	cout << count;

	return 0;
}
