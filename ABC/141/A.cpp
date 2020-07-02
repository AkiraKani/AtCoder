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

	if (s=="Sunny") {
		cout << "Cloudy";
	} else if (s=="Cloudy") {
		cout << "Rainy";
	} else {
		cout << "Sunny";
	}

	return 0;
}