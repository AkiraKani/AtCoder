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
	int n = 0;
	cin >> n;
	std::vector<int> v;

	rep(i, n) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	ll min = 999999999999;
	rep(i, 100) {
		ll tmp = 0;
		rep(j, n) {
			tmp += (v[j] - (i + 1)) * (v[j] - (i + 1));
		}
		if (min > tmp) {
			min = tmp;
		}
	}

	cout << min;

	return 0;
}
