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
	vector<vector<int>> vo(n);
	vector<vector<int>> v(n);
	for(int i = 0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		vo[i].push_back(a);
		vo[i].push_back(b);
		vo[i].push_back(0);
		v[a-1].push_back(b-1);
		v[b-1].push_back(a-1);
	}

	int edge = 1;
	for (int i = 0; i < n; ++i) {
		vo[i][0]
		for (int j = 0; j < size; ++j) {
			v[i][j]
		}
	}

	for(int i = 0; i<n-1; i++) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	return 0;
}
