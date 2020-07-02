#include <algorithm>
#include <bitset>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/range/irange.hpp>
#include <cmath>
#include <map>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace mp = boost::multiprecision;
typedef long long ll;
const ll M = 1000000007;

int main(){
	string s;
	cin >> s;

	if (s == "SUN") {
		cout << 7;
	} else if (s == "MON") {
		cout << 6;
	} else if (s == "TUE") {
		cout << 5;
	} else if (s == "WED") {
		cout << 4;
	} else if (s == "THU") {
		cout << 3;
	} else if (s == "FRI") {
		cout << 2;
	} else {
		cout << 1;
	} 

	return 0;
}
