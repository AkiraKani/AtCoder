#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

bool asec(int *a, int n){
	int temp = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < temp) {
			return false;
		}
		temp = a[i];
	}
	return true;
}

int main(){
	int n, i, j;
	n = 0;
	cin >> n;

	int a[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	int temp;
	if (asec(a, n)) {
		cout << "YES";
		return 0;
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			if (asec(a, n)) {
				cout << "YES";
				return 0;
			}
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	cout << "NO";
	return 0;
}
  