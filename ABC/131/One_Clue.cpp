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
	int k, x;
	cin >> k >> x;

	if (x - k + 1 < -1000000){
		cout << -1000000;
		for(int i = -999999; i < x + k; i++) {
			cout << " " << i;
		}
	} else if (x + k - 1 > 1000000){
		cout << x - k + 1;
		for(int i = x - k + 2; i < 1000001; i++) {
			cout << " " << i;
		}
	} else {
		cout << x - k + 1;
		for(int i = x - k + 2; i < x + k; i++) {
			cout << " " << i;
		}
	}

	return 0;

}