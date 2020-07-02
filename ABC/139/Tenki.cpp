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
	string a, b;
	cin >> a >> b;

	int res = 0;
	for(int i = 0; i < 3; i++) {
		if (a[i] == b[i]) res++;
	}
	cout << res;

	return 0;
}