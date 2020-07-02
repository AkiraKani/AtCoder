#include <algorithm>
#include <bitset>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/range/irange.hpp>
#include <cmath>
#include <map>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	int n,k;
	cin >> n >> k;
	vector<ll> v(n);

	for(int i = 0; i<n; i++) {
		cin >> v[i];
	}

	int limit = min(n, k);
	for (int i = 0; i < limit + 1; ++i) {
		ll suml;
		if (i == 0) {
			suml = 0;
		} else {
			suml = accumulate(v.begin(), v.end() - (limit - i), 0);
		}
		for (int j = 0; i + j <= limit; ++j) {
			ll sumr;
			if (j == 0) {
				sumr = 0;
			} else {
				sumr = accumulate(v.begin() + (limit - j), v.end(), 0);
			}
			int rest = k - (i + j);


		}
	}

	return 0;
}
