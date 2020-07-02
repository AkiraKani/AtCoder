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
	int n;
	cin >> n;

	string s;
	cin >> s;

	int a[n-1];
	rep(i, n-1) {
		a[i] = abs((int)s[i] - (int)s[i+1]);
	}

	bool one_flag = false;
	bool sym_flag = true;

	rep(i, n-1) {
		if (a[i] == 1) {
			one_flag = true;
		}
	}

	if (n % 2 == 0) {
		rep(i, n / 2 -1) {
			if (a[i] != a[n - 2 - i]) {
				sym_flag = false;
				break;
			}
		}
	}

	if (n % 2 == 1) {
		rep(i, (n - 1)/ 2) {
			if (a[i] != a[n - 2 - i]) {
				sym_flag = false;
				break;
			}
		}
	}

	if (sym_flag) {
		cout << 0;
		return 0;
	}

	if (!sym_flag && !one_flag) {
		cout << 2;
		return 0;
	}

	cout << 1;

	return 0;
}
