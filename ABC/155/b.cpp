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
	int n = 0;
	cin >> n;
	rep(i, n) {
		int x;
		cin >> x;
		if (x % 2 == 0) {
			if (x % 3 != 0 && x % 5 != 0) {
				cout << "DENIED";
				return 0;
			}
		}
	}

	cout << "APPROVED";
	return 0;
}
