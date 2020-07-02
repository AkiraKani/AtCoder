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
	int n, d;
	cin >> n >> d;

	int res;
	if(n % (2 * d + 1) == 0) {;
		res = n / (2 * d + 1);
	} else {
		res = n / (2 * d + 1) + 1;
	}

	cout << res;
	return 0;
}