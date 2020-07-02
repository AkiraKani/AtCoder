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
	int h, w, a, b;
	h = 1;
	w = 1;

	cin >> h >> w >> a >> b;

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			cout << 1;
		}
		for (int j = 0; j < w - a; j++) {
			cout << 0;
		}
		cout << endl;
	}
	for (int i = 0; i < h - b; i++) {
		for (int j = 0; j < a; j++) {
			cout << 0;
		}
		for (int j = 0; j < w - a; j++) {
			cout << 1;
		}
		cout << endl;
	}

	return 0;
}