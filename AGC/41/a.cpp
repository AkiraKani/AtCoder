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
	mp::cpp_int n, a, b;
	cin >> n >> a >> b;
	if ((b - a) % 2 == 0) {
		cout << (b - a) / 2;
		return 0;
	}
	if (n - b > a - 1) {
		cout << ((b - (a - 1) - 1) - 1) / 2 + (a - 1) + 1;
		return 0;
	}
	cout << n - (a + b - 1) / 2;
	return 0;
}
