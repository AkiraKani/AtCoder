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
	int n=1;
	cin >> n;
	string s;
	cin >> s;

	// A = 65
	// Z = 90
	for (int i = 0; i < s.length(); ++i) {
		char c = s[i];
		if (c + n > 90) {
			cout << (char)((c + n - 90) + 64);
		} else {
			cout << (char)(c + n);
		}
	}

	return 0;
}
