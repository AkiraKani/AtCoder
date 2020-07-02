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
	int a[n];

	verctor<int> v;
	char temp = s[0];
	a[0] = 0;
	int p = 0;
	for(int i = 1; i < n; i++){
		if (temp == 'L' && s[i] == 'R') {
			p++;
		}
		if (temp == 'R' && s[i] == 'L') {
			v.push_buck(i-1);
		}
		a[i] = p;
		temp = s[i];
	}

	for(int i = 0; i < n; i++){
		v[a[i]]
}