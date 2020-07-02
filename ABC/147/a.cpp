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
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b + c > 21) {
		printf("bust");
	} else {
		printf("win");
	}

	return 0;
}
