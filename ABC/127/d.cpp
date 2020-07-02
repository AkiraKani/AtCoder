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
	int n,m;
	cin >> n >> m;
	map<ll, ll> table;

	for(int i = 0; i<n; i++) {
		ll x;
		cin >> x;
		if (!table.contains(x)) {
			table[x] = 0;
		}
		table[x]++;
	}

	for (int i = 0; i < m; ++i) {
		ll x, y;
		cin >> x >> y;
		if (!table.contains(y)) {
			table[y] = 0;
		}
		table[y] += x;
	}

	return 0;
}
