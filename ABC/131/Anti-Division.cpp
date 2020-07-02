#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

int gcd(int n, int m);

int main(){
	mp::cpp_int a, b, c, d;
	cin >> a >> b >> c >> d;

	mp::cpp_int lcm = c * d / gcd(c, d);

	mp::cpp_int num_c = (b / c)- ((a - 1) / c);
	mp::cpp_int num_d = b / d - (a - 1) / d;
	mp::cpp_int num_lcm = b / lcm - (a - 1) / lcm;

	cout << b - a + 1 - (num_c + num_d - num_lcm) << endl;
	return 0;
}

mp::cpp_int gcd(mp::cpp_int n, mp::cpp_int m){
	mp::cpp_int c = n;
	mp::cpp_int d = m;
	mp::cpp_int temp;

	if (c < d) {
		temp = d;
		d = c;
		c = temp;
	}

	mp::cpp_int r = c % d;
	while (r != 0) {
		c = d;
		d = r;
		r = c % d;
	}

	return d;
}