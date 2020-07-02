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
	int q;
	mp::cpp_int k;
	cin >> n >> k >> q;
	int j;

	int a[n];
	vector<mp::cpp_int> b(n);
	for (int i = 0; i < n; i++) {
		a[i] = 0;
		b[i] = 0;
	}

	for (int i = 0; i < q; i++) {
		cin >> j;
		a[j-1]++;
	}

	for (int i = 0; i < n; i++) {
		b[i] = k - (q - a[i]);
	}

	for (int i = 0; i < n; i++) {
		if (b[i] <= 0) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl;
		}
	}
	
	return 0;
}