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
const long T = 1000000000;

int main(){
	long n=1l;
	long k, s;
	cin >> n >> k >> s;
	if (s == T) {
		for (int i = 0; i < k; ++i) {
			if (i == k-1 && n - k == 0) {
				cout << s;
			} else {
				cout << s << " ";
			}
		}
		for (int i = 0; i < n - k; ++i) {
			if (i == n - k - 1) {
				cout << s - 1;
			} else {
				cout << s - 1 << " ";			
			}
		}
		return 0;
	}

	for (int i = 0; i < k; ++i) {
		if (i == k-1 && n - k == 0) {
			cout << s;
		} else {
			cout << s << " ";
		}
	}
	for (int i = 0; i < n - k; ++i) {
		if (i == n - k - 1) {
			cout << T;
		} else {
			cout << T << " ";
		}
	}
	return 0;
}
