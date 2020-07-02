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
	int a, b;
	cin >> a >> b;

	if (a <= b) {
		cout << 1;
		return 0;
	} 

	if (a % b == 0) {
		cout << a / b;
		return 0;
	}

	cout << a / b + 1;

	return 0;
}
