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
	string a;
	cin >> a;
	mp::cpp_int n;
	cin >> n;
 
	if (a.length() == 1) {
		cout << n / 2;
		return 0;
	}
 
	if (a.length() == 2) {
		if (a[0] == a[1]) {
			cout << n;
			return 0;
		}
		cout << 0;
		return 0;
	}
 
	bool flag = true;
	for (int i = 0; i < a.length() - 1; i++) {
		if (a[i] != a[i+1]) {
			flag = false;
		}
		if (flag && a.length() % 2 == 1) {
			cout << (a.length() / 2) * n + (n / 2);
			return 0;
		}
	}
 
	flag = false;
 
	char temp = a[0];
	char next = a[1];
	mp::cpp_int sum = 0;
	mp::cpp_int count = 1;
	mp::cpp_int head_count = 1;
	for (int i = 0; i < a.length() - 1; i++) {
		temp = a[i];
		next = a[i+1];
 
		if (temp == next) {
			count++;
		} else {
			sum += count / 2;
			if (!flag) {
				head_count = count;
				flag = true;
			}
			count = 1;
		}
	}
 
	sum += count / 2;
	sum *= n;
	
	if (a[0] == a[a.length()-1] && count % 2 == 1 && (count + head_count) % 2 == 0) {
		sum += n-1;
	}
 
	cout << sum;
	return 0;
}