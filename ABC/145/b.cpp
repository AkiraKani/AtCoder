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
	string s = "";
	cin >> s;

	if (n % 2 == 1) {
		cout << "No";
		return 0;
	}

	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[i + n/2]) {
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";

	return 0;
}