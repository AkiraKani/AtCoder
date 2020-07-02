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
	mp::cpp_int n;
	cin >> n;
	mp::cpp_int res = 0;

	if (n==1) {
		cout << 0;
		return 0;
	}
	res = n * (n-1) / 2;
	cout << res;

	return 0;
}