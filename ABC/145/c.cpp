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
	double a[n][2];

	for(int i = 0; i<n; i++) {
		for(int j = 0; j<2; j++) {
			cin >> a[i][j];
		}
	}

	double sum = 0;

	for(int i = 0; i<n; i++) {
		for(int j = i+1; j<n; j++) {
			sum += sqrt(pow(a[i][0] - a[j][0], 2) + pow(a[i][1] - a[j][1], 2));
		}
	}

	cout << std::setprecision(10) << sum * 2 / n;

	return 0;
}