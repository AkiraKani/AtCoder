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
	string s;
	cin >> s;

	int count = 0;
	int n = s.length();
	int m;
	if (n % 2 == 0) {
		m = n/2;
	} else {
		m = n/2 + 1;
	}
	for(int i = 0; i< m; i++) {
		if (s[i] != s[n-i-1]) {
			count++;
		}
	}

	cout << count;

	return 0;
}
