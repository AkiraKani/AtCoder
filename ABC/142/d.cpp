#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
namespace mp = boost::multiprecision;

mp::cpp_int gcd(mp::cpp_int a, mp::cpp_int b) {
	mp::cpp_int r, temp;
	if (a < b) { 
		temp = a; 
		a = b; 
		b = temp; 
	}
	while ((r = a%b) != 0) {
		a = b;
		b = r;
	}
	return b;
}

int main(){
	mp::cpp_int a, b;
	cin >> a >> b;

	vector<mp::cpp_int> a_div(0);
	vector<mp::cpp_int> b_div(0);
	vector<mp::cpp_int> div(0);

	mp::cpp_int sqrta = (mp::cpp_int) sqrt(a);
	for (unsigned int i = 1; i < sqrta + 1; i++) {
		if (a % i == 0) {
			a_div.push_back(i);
			if (i != a/i) {
				a_div.push_back(a/i);
			}
		}
	}
	mp::cpp_int sqrtb = (mp::cpp_int) sqrt(b);
	for (unsigned int i = 1; i < sqrtb + 1; i++) {
		if (b % i == 0) {
			b_div.push_back(i);
			if (i != b/i) {
				b_div.push_back(b/i);
			}
		}
	}

	for (unsigned int i = 0; i < a_div.size(); i++) {
		mp::cpp_int temp = a_div[i];
		for (unsigned int j = 0; j < b_div.size(); j++) {
			if (temp == b_div[j]) {
				div.push_back(temp); 
			}
		}
	}

	sort(div.begin(), div.end());
	int size = div.size();
	int count = 1;
	for (unsigned int i = 1; i < size; i++) {
		bool plus = true;
		for (unsigned int j = 1; j < i; j++) {
			if (gcd(div[i], div[j]) != 1) {
				plus = false;
				break;
			} 
		}
		if (plus) {
			count++;
		}
	}

	cout << count;

	return 0;
}