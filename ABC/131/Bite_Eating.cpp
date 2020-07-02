#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
	int n, l, i;
	cin >> n >> l;

	int sum = 0;
	int min = l;
	for (i = 0; i < n; i++) {
		sum += l + i;
		if (abs(min) > abs(l + i)) {
			min = l + i;
		}
	}

	cout << sum - min << endl;
	return 0;
}