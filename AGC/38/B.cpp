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
	int n = 1;
	int i, k;

	cin >> n >> k;
	vector<int> v(n);

	for (i = 0; i < n; i++) {
		cin >> v[i];
	}

	int max = 0;
	int min = 0;
	bool asc = true;
	int asc_n = 0;
	for (i = 0; i < k; i++) {
		int temp = v[i];
		if (temp > max) {
			max = temp;
		}
		if (temp < min) {
			min = temp;
		}
		if (i != k-1) {
			if (v[i] > v[i+1]) {
				asc = false;
				asc_n = 0;
			} else {
				asc_n++;
			}
		}
	}

	int count = 1;

	for (i = 1; i < n - k + 1; i++) {
		int temp = v[k + i - 1];
		int pre = v[k + i - 2];

		if (asc) {
			if (temp < pre) {
				asc = false;
				asc_n = 0;
				count++;
				min = v[i];
				continue;
			}
			max = temp;
			min = v[i];
			continue;
		} else {
			if (temp > pre) {
				asc_n++;
			} else {
				asc_n = 0;
				asc = false;
				if (v[i-1] == min){
					min = *min_element(v.begin() + i, v.begin() + k + i - 1);
				}
				count++;
				continue;
			}
			if (asc_n == k-1) {
				asc = true;
			} else {
				if (v[i-1] == min){
					min = *min_element(v.begin() + i, v.begin() + k + i - 1);
				}
			}
			if (asc) {
				max = temp;
				min = v[i];
				continue;
			}
			if (temp > max || v[i-1] == min) {
				max = temp;
				min = *min_element(v.begin() + i, v.begin() + k + i - 1);
				continue;
			}
			count++;
		}
	}

	cout << count;

	return 0;
}