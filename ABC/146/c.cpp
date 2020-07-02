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
	long double a, b, x;
	cin >> a >> b >> x;

	ll max = 0;
	for (int i = 1; i < 11; i++) { 
		ll temp = (ll) ((x / a) - (b / a) * i);
		if (temp > 0 && to_string(temp).length() == i) {
			max = temp;
		} else if (temp > 0 && to_string(temp).length() > i) {
			max = pow(10, i) - 1;
		}
	}

	if (max > 1000000000) {
		cout << 1000000000;
		return 0;
	}
	if (max < 0) {
		cout << 0;
		return 0;
	}
	cout << max;

	return 0;
}
