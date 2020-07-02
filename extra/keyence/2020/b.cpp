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
	map<long, long> mp;
	map<long, long> end_time;

	for (int i = 0; i<n; i++) {
		long k, v;
		cin >> k >> v;
		mp[k] = v;
		end_time[min(k+v, 10000000000)] = 0;
	}

	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
		long x = end_time[min(itr->first + itr->second, 10000000000)];
		end_time[min(itr->first + itr->second, 10000000000)] = max(itr->first, x);
	}

	long tmp = 0;
	long ret = 0;
	for(auto itr = end_time.begin(); itr != end_time.end(); ++itr) {
		if (tmp <= max(0l, itr->second - mp[itr->second])) {
			ret++;
			tmp = min(mp[itr->second] + itr->second, 10000000000);
		}
	}

	cout << ret;
	return 0;
}
