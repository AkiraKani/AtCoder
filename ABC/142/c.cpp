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
	int n=1;
	cin >> n;
	vector<int> a(n);

	for(int i = 0; i<n; i++) {
		int temp;
		cin >> temp;
		a[temp-1] = i + 1;
	}

	cout << a[0];
	for(int i = 1; i<n; i++) {
		cout << " " << a[i];
	}
	return 0;
}