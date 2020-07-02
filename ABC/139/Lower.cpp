#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){
	std::vector<int> v;
	int n = 1;
	cin >> n;
	int i, j;
	cin >> i;
	int count = 0;
	for (int k = 1; k < n; k++) {
		cin >> j;
		if (i >= j) {
			count++;
		} else {
			v.push_back(count);
			count = 0;
		}
		i = j;
	}
	v.push_back(count);

	cout << *std::max_element(v.begin(), v.end());
	return 0;
}