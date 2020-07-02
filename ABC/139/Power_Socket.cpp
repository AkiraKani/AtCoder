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
	int a, b;
	cin >> a >> b;

	int res = 0;
	if (b == 1) {
		cout << 0;
		return 0;
	}
	if (a >= b) {
		cout << 1;
		return 0;
	}
	int c = (b-a) / (a-1);
	if ((b-a)%(a-1) == 0) {
		cout << c + 1;
		return 0;
	}
	cout << c + 2;
	return 0;
}