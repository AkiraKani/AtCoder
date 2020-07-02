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

	cout << max(max(a + b, a-b), a*b);
	return 0;
}