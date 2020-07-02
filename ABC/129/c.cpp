#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	int n,m;
	cin >> n >> m;

	vector<ll> v(n);
	for(int i = 0; i<n; i++) {
		v[i] = -1;
	}

	for(int i = 0; i<m; i++) {
		int x;
		cin >> x;
		v[x-1] = 0;
	}

	if (v[0] != 0) v[0] = 1;
	if (v[1] != 0) v[1] = v[0] + 1;
	for (int i = 2; i<n; i++) {
		if (v[i] != 0) {
			v[i] = (v[i-1] + v[i-2]) % M;
		}
	}

	cout << v[n-1];

	return 0;
}