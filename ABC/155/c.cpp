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
#define decn int n = 0; cin >> n

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	decn;
	map<string, int> mp;

	int max = 0;
	rep(i, n) {
		string s;
		cin >> s;
		mp[s]++;
		if (max < mp[s]) {
			max = mp[s];
		}
	}

	vector<string> st;
	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
		if (itr->second == max) {
			st.push_back(itr->first);
		}
	}

	sort(st.begin(), st.end());

	rep(i, st.size()) {
		cout << st[i] << endl;
	}

	return 0;
}
