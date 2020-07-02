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

	if ((a - b) % 2 == 0) {
		cout << (a + b) / 2;
	} else {
		cout << "IMPOSSIBLE";
	}

	return 0;
}
  