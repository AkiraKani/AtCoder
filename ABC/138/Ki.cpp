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
	int n = 1;
	int q = 1;
	int a, b;
	cin >> n >> q;

	vector< vector<int> > arr(n-1);
	for (int i = 0; i < n-1; i++) {
		cin >> a >> b;
		arr[a-1].push_back(b);
	}

	vector<mp::cpp_int> score(n);
	vector<mp::cpp_int> sum(n);
	for (int i = 0; i < n; i++) {
		score[i] = 0;
		sum[i] = 0;
	}
	for (int i = 0; i < q; i++) {
		cin >> a >> b;
		sum[a-1] += b;
		score[a-1] += b;
	}
	for (int i = 0; i < n-1; i++) {
		int size = arr[i].size();
		for (int j = 0; j < size; j++) {
			sum[arr[i][j]-1] += sum[i];
			score[arr[i][j]-1] += sum[i];
		}
	}
	cout << score[0];
	for (int i = 1; i < n; i++) {
		cout << " " << score[i];
	}
	return 0;
}