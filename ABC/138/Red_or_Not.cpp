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
	int a;
	string s;
	cin >> a >> s;

	if (a >= 3200) {
		cout << s;
		return 0;
	}
	cout << "red";
	return 0;
}