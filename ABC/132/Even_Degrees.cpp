#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
	int n, i, temp;
	cin >> n;
	map<long long, int> mp;

	for (i = 0; i < n; i++) {
		cin >> temp;
		auto itr = mp.find(temp);
		if (itr != mp.end()) {
			mp[temp]++;
		} else {
			mp[temp] = 1;
		}
	}

	if (mp.size() > 3) {
		cout << "No";
		return 0;
	}

	if (mp.size() == 1){
		for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
			if (itr->first != 0) {
				cout << "No";
				return 0;
			}
		}
		cout << "Yes";
		return 0;
	}

	if (n % 3 != 0) {
		cout << "No";
		return 0;
	}

	if (mp.size() == 2){
		long long b[2];
		i = 0;
		for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
			b[i] = itr->first;
			i++;
		}
		if (b[0] != 0 && b[1] != 0) {
			cout << "No";
			return 0;
		}
		if (b[0] == 0 && mp[b[0]] != n / 3) {
			cout << "No";
			return 0;
		}
		if (b[1] == 0 && mp[b[1]] != n / 3) {
			cout << "No";
			return 0;
		}
	}

	if (mp.size() == 3){
		long long b[3];
		i = 0;
		for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
			b[i] = itr->first;
			i++;
			if (itr->second != n / 3) {
				cout << "No";
				return 0;
			}
		}

		if ((b[0] ^ b[1]) != b[2]) {
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";
	return 0;
}