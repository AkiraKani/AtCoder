s#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int main(){
	int i, j, n;
	cin >> n;
	int a[n];
	int b[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count;
	int sum = 0;
	for (i = n - 1; i > -1; i--) {
		count = n / (i + 1);
		if (count == 0) {
			if (a[i] == 1) {
				b[i] = 1;
			} else {
				b[i] = 0;
			}
		} else {
			for(j = 2 * i, j < n; j += count) {
				sum += b[j];
			}
			if (sum % 2 == a[i]) {
				b[i] = 0;
			} else {
				b[i] = 1;
			}
		}
	}

}
