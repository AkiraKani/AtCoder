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
	cin >> n;

	double a;
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += 1 / a;
	}
	cout << 1 / sum;
	return 0;
}