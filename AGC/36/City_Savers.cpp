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
	int n, i, j;
	n = 0;
	cin >> n;

	int a[n + 1];
	int b[n];

	for (i = 0; i < n + 1; i++) {
		cin >> a[i];
	}

	for (i = 0; i < n; i++) {
		cin >> b[i];
	}

	mp::cpp_int sum = 0;
	for (i = 0; i < n; i++) {
		if (b[i] >= a[i]) {
			b[i] = b[i] - a[i];
			sum += a[i];
			a[i] = 0;
		} else {
			a[i] = a[i] - b[i];
			sum += b[i];
			b[i] = 0;
		}

		if (b[i] >= a[i + 1]) {
			b[i] = b[i] - a[i + 1];
			sum += a[i + 1];
			a[i + 1] = 0;
		} else {
			a[i + 1] = a[i + 1] - b[i];
			sum += b[i];
			b[i] = 0;
		}
	}

	cout << sum;
	return 0;
}
  