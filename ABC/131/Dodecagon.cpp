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
	int i, n;
	cin >> n;
	int a[n];

	for(i = 0; i < n; i++){
		cin >> a[i];
	}

	int max = 0;
	int max2 = 0;

	for(i = 0; i < n; i++){
		if (a[i] > max) {
			max = a[i];
		} else if (a[i] > max2 && max >= a[i]) {
			max2 = a[i];
		} else {
		}
	}

	if (max == max2) {
		for(i = 0; i < n; i++){
			cout << max << endl;
		}
		return 0;
	}

	for(i = 0; i < n; i++){
		if (a[i] == max) {
			cout << max2 << endl;
		} else {
			cout << max << endl;
		}
	}
	return 0;
}