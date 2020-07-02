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
	int h, w, n;
	cin >> h >> w >> n;

	int tmp = max(h, w);
	if (n % tmp == 0) {
		cout << n / tmp;
		return 0;
	}

	cout << (n / tmp) + 1;
	return 0;
}
