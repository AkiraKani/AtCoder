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
	// int n=1;
	// vector<int> a(n);

 	string s;
	cin >> s;
	int n = s.length();

	mp::cpp_int ret = 0;
	char pre = s[0];
	mp::cpp_int pre_num = 0;
	mp::cpp_int temp = 0;
	mp::cpp_int count = 1;

	bool flag = (s[0] == '>') ? true : false;

	for (int i = 0; i<n; i++) {
		// cout << temp << ",";
		ret += temp;
		// cout << "ret" << ret << endl;
		if (s[i] == pre) {
			if (s[i] == '<') {
				temp++;
			} else {
				temp--;
			}
			count++;
		} else {
			if (s[i] == '<') {
				// cout << "pre_num" << pre_num << endl;
				// cout << "temp" << temp << endl;
				// cout << "count" << count << endl;
				if (pre_num > -1 * temp) {
					ret += temp * -1 * (count - 1);
				} else {
					if (flag) {
						ret += temp * -1 * (count - 1) + (-1 * temp - pre_num);
						flag = false;
					} else {
						ret += temp * -1 * (count - 1) + (-1 * temp - pre_num + 1);
					}
				} 
				temp = 1;
			} else {
				pre_num = temp;
				temp = 0;
			}
			count = 2;
		}
		pre = s[i];
	}
	// cout << "pre_num" << pre_num << endl;
	// cout << "temp" << temp << endl;
	// cout << "count" << count << endl;
	ret += temp;
	if (s[n-1] == '>') {
		if (pre_num > -1 * temp) {
			ret += temp * -1 * (count - 1);
		} else {
			if (flag) {
				ret += temp * -1 * (count - 1) + (-1 * temp - pre_num);
				flag = false;
			} else {
				ret += temp * -1 * (count - 1) + (-1 * temp - pre_num + 1);
			}
		}
	}

	cout << ret;

	return 0;
}