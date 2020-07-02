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
	int n,m;
	cin >> n >> m;

	int max = 100000;
	int min = 0;
	for(int i = 0; i<m; i++) {
		int x, y;
		cin >> x >> y;
		if (min < x) {
			min = x;
		}
		if (max > y) {
			max = y;
		}
	}

	int ret = max - min + 1;
	cout << (ret > 0 ? ret : 0);

	return 0;
}
