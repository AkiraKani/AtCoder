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

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define sort(v) sort(v.begin(), v.end())
#define in(type, n) type n = 0; cin >> n

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	in(int, n);
	in(ll, k);
	
	vector<ll> v;
	rep(i, n) {
		ll x;
		cin >> x; 
		v.push_back(x);
	}
	sort(v);
	int pos = 0;
	int z = 0;
	int neg = 0;
	rep(i, n) {
		ll tmp = v[i];
		if (tmp > 0) {
			pos++;
		} else if (tmp == 0) {
			z++;
		} else {
			neg++;
		}
	}

	if (k < pos * neg + 1) {
		cout << 
	} else if (k < z * n + 1) {
		cout << 0;
		return 0;
	} else {
	}
				


	return 0;
}
