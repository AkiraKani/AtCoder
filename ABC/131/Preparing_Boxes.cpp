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
	int i, j, n;
	cin >> n;
	int a[n];
	int b[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	int count = 0;
	int sum = 0;
	for (i = n - 1; i > -1; i--) {
		if (n / (i + 1) == 1) {
			if (a[i] == 1) {
				b[i] = 1;
				count++;
			} else {
				b[i] = 0;
			}
		} else {
			sum = 0;
			for(j = 2 * (i + 1) - 1; j < n; j += (i + 1)) {
				sum += b[j];
			}
			if (sum % 2 == a[i]) {
				b[i] = 0;
			} else {
				b[i] = 1;
				count++;
			}
		}
	}

	if(count == 0){
		cout << 0;
		return 0;
	}

	cout << count << endl;
	int count_ = 0;
	for(i = 0; i < n; i++){
		if(b[i] == 1){
			cout << i + 1;
			count_++;
			if (count == count_) {
				return 0;
			} else {
				cout << " ";
			}
		}
	}
}
