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
	ll n=1;
	cin >> n;
	vector< map<ll, ll> > v(n);

	for(ll i = 0; i<n; i++) {
		ll a;
		cin >> a;
		map<ll, ll> m;
		for (ll j = 0; j < a; ++j){
			ll x, y;
			cin >> x >> y;
			m[x] = y;
		}
		v[i]=m;
	}

	ll max = 0;
	ll N = pow(2, n);
	for (ll i = 0; i < N; ++i) {
		bool flag = true;
		for (ll j = 0; j < n; ++j) {
			ll jyes = (i>>j)&1;
			map <ll, ll> m = v[j];
			if (jyes == 1) {
				for (ll k = 0; k < n; ++k){
					if (m.find(k+1) != m.end()) {
						if (m[k+1] != ((i>>k)&1)) {
							flag = false;
							break;
						}
					}
				}
			} 
			if (!flag) {
				break;
			}
		}
		if (flag) {
			ll count = 0;
			for (ll j = 0; j < n; ++j) {
				count += ((i>>j)&1);
			}
			if (count > max) {
				max = count;
			}
		}
	}

	cout << max;

	return 0;
}
