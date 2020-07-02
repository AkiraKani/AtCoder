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
	string s;
	cin >> s;
	int n = s.length();


	for (int i = 0; i < n; i+=2) {
		if (s[i]=='L') {
			cout << "No";
			return 0;
		}
	}
	for (int i = 1; i < n; i+=2) {
		if (s[i]=='R') {
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";

	return 0;
}