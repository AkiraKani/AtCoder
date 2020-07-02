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

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	if ( a == b && b == c) {
		cout << "No";
		return 0;
	}

	if ( a != b && b != c && a != c) {
		cout << "No";
		return 0;
	}

	cout << "Yes";

	return 0;
}
