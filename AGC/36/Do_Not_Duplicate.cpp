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
	mp::cpp_int n = 1000000000;
	mp::cpp_int s;
	cin >> s;

	mp::cpp_int a, b, x;
	
	if (s <= n) {
		cout << 0 << " " << 0 << " " << 0 << " " << 1 << " " << s << " " << 0 << endl;
		return 0;
	}

	if (s == n * n) {
		cout << 0 << " " << 0 << " " << 0 << " " << n << " " << n << " " << 0 << endl;
		return 0;
	}
	
	a = s / n;
	x = s % n;
	cout << x << " " << 1 + a << " " << 0 << " " << 1 << " " << n << " " << 0 << endl;
	return 0;
}
  