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
#define decn int n = 0; cin >> n
#define sort(v) sort(v.begin(), v.end())
#define in(type, n) type n = 0; cin >> n

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	ll n;
	int k;
	cin >> n >> k;
	rep(i, 100) {
		if (n / pow(k, i) < 1) {
			if (n == pow(k, i)) {
				cout << i + 1;
				return 0;
			}
			cout << i;
			return 0;
		}
	}

	return 0;
}
