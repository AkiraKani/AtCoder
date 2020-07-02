#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <numeric>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){
	int n=1;
	cin >> n;
	vector<int> v(n);

	for(int i = 0; i<n; i++) {
		cin >> v[i];
	}

	int sum = accumulate(v.begin(), v.end(), 0);

	int temp = 0;
	for(int i = 1; i<n; i++) {
		temp += v[i-1];
		if (abs(sum - 2 * temp) <= abs(sum - 2 * (temp + v[i]))) {
			cout << abs(sum - 2 * temp);
			return 0;
		}
	}

	temp += v[n-1];
	cout << abs(sum - 2 * temp);

	return 0;
}