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
	int k;
	cin >> n >> k;

	int res = 0;
	for(int i = 0; i<n; i++) {
		int temp;
		cin >> temp;
		if (temp>=k) {
			res++;
		}
	}

	cout << res;

	return 0;
}